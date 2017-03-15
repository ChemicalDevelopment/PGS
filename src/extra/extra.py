###
#
# C ChemicalDevelopment 2017
#   Part of the PGS project.
#   <http://pgs.chemicaldevelopment.us/>
#
# Authors:
#   Cade Brown <cade@cade.site>
#
# PGS is free software; you can redistribute it and/or modify it under the terms of the GNU GPL v3 or later, at your choice. See details in LICENSE.txt
#
###

import sys
import time

import json
import threading
import subprocess

import PGS
import pgslog
import glbl

def _prod(x):
	ret = 1
	for xx in x:
		ret = ret * xx
	return ret

def get_workloads(max=1):
	vv = glbl.firebase.database().child("workloads").get().val()
	ret = []
	so_far = 0
	for wlk in vv.keys():
		if vv[wlk]["_state"] == "none":
			if so_far < max:
				ret.append([wlk, DictToObject(**vv[wlk])])
				so_far += 1
	return ret

def get_workload(file=None):
	if file is None:
		vv = get_workloads(1)
		if len(vv) == 0:
			return None
		return vv[0]
	else:
		return "LOCAL", DictToObject(**json.load(open(file)))

class DictToObject:
	def __str__(self):
		return str(dict(self.entries))

	def __repr__(self):
		return self.__str__()

	def __init__(self, **entries):
		self.entries = entries
		self.__dict__.update(entries)

class AutoRefresh:
	def __init__(self, interval=60*58):
		self.interval = interval
		thread = threading.Thread(target=self.run, args=())
		thread.daemon = True
		thread.start()
	
	def refresh(self):
		glbl.usr = glbl.firebase.auth().refresh(glbl.usr["refreshToken"])
		

	def run(self):
		while True:
			tmpUser = None
			try:
				time.sleep(self.interval)
				self.refresh()
			except Exception as e:
				print str(e)

class Runner:
	def __init__(self, runFile, online=True, workloadFile=None):
		self.online = online
		self.runFile = runFile
		self.workloadFile = workloadFile
		self.wl = None

		self.to_find_idx = 0
		if self.workloadFile:
			fp = open(self.workloadFile)
			to_find = fp.read().split("\n")
			fp.close()
			self.to_find = []
			for x in to_find:
				if x and x != "" and not x.endswith("DONE"):
					self.to_find.append(x)
		else:
			self.to_find = None
		thread = threading.Thread(target=self.run, args=())
		thread.daemon = True
		thread.start()
	
	def handle_pipe(self, name, pipe):
		for line in iter(pipe.readline, ""):
			if "(O)" in line:
				pgslog.find(line)
				find = line.split(":")[-1]
				inarow = find.split(";")[0]
				eq = find.split(";")[1].replace("[", "").replace("]", "").split(",")
				if self.online:
					glbl.firebase.database().child("workloads").child(self.wl[0]).child("finds").push({ "eq": eq })
					glbl.firebase.database().child("workloads").child(self.wl[0]).child("_changed").set(int(time.time() * 1000))
			elif "(P)" in line:
				pgslog.info(line)
				percent = int(line.split(":")[-1])
				if self.online:
					glbl.firebase.database().child("workloads").child(self.wl[0]).child("_changed").set(int(time.time() * 1000))
					glbl.firebase.database().child("workloads").child(self.wl[0]).child("_progress").set(percent)
			elif name == "stderr":
				pgslog.error(name + ": " + line)
			else:
				pgslog.info(name + ": " + line)
				
	def run(self):
		while True:
			if self.to_find:
				if self.to_find_idx < len(self.to_find):
					self.wl = get_workload("workloads/" + self.to_find[self.to_find_idx])
					self.file = self.to_find[self.to_find_idx]
					self.to_find_idx = 1 + self.to_find_idx
				else: 
					break
			else:
				self.file = None
				self.wl = get_workload()
			if self.wl is None:
				pgslog.info("\nRan out of workloads!\n")
				break
			cmd = [self.runFile] + ["./primes.dat"] + list(map(str, self.wl[1].offsets)) + list(map(str, self.wl[1].ranges))
			start_time = time.time()
			proc = subprocess.Popen(cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
			pgslog.info("\nRunning cmd: " + str(cmd))
			threading.Thread(target=self.handle_pipe, args=("stdout", proc.stdout,)).start()
			threading.Thread(target=self.handle_pipe, args=("stderr", proc.stderr,)).start()
			proc.wait()
			elapsed = time.time() - start_time

			if self.file:
				fp = open(self.workloadFile)
				st = fp.read()
				fp.close()

				st = st.replace(self.file, self.file + ".DONE")
				fp = open(self.workloadFile, "w+")
				fp.write(st)
				fp.close()
			
			if self.online:

				glbl.firebase.database().child("workloads").child(self.wl[0]).child("user").set(glbl.usr["userId"])
				glbl.firebase.database().child("workloads").child(self.wl[0]).child("_changed").set(int(time.time() * 1000))
				glbl.firebase.database().child("workloads").child(self.wl[0]).child("_state").set("done")
				glbl.firebase.database().child("workloads").child(self.wl[0]).child("_progress").set(100)
				c_check = glbl.firebase.database().child("user_data").child(glbl.usr["userId"]).child("checked").get().val()
				if c_check is None:
					c_check = 0
				c_check = c_check + _prod(self.wl[1].ranges)
				glbl.firebase.database().child("user_data").child(glbl.usr["userId"]).child("checked").set(c_check, token=glbl.usr["idToken"])
				c_time = glbl.firebase.database().child("user_data").child(glbl.usr["userId"]).child("time").get().val()
				if c_time is None:
					c_time = 0
				c_time = c_time + elapsed
				glbl.firebase.database().child("user_data").child(glbl.usr["userId"]).child("time").set(c_time, token=glbl.usr["idToken"])