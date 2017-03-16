###
# PGS.py -- main file for the PGS project
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

import os
import argparse
import json
import time
from datetime import datetime    

from extra import extra
import glbl
import pgslog

def main():
	parser = argparse.ArgumentParser(description="PGS - Prime Generator Search", version="2.2.5", add_help=True)
	parser.add_argument('-p', '--prefs', type=str, default="my.prefs", help='Preferences file')
	parser.add_argument('-off', '--offline', action='store_true', help='Offline mode')
	parser.add_argument('-f', '--file', type=str, default="workloads/pending.txt", help='File for local workloads')
	parser.add_argument('-pf', '--primefile', type=str, default="./primes.dat", help='Prime file (normally .dat)')
	parser.add_argument('-sm', '--submit', action='store_true', help='Submit output/finds.txt to the server')
	parser.add_argument('-dl', '--download', type=int, default=-1, help='Downloads workloads into workloads/')

	args = parser.parse_args()

	pgslog.info("\n\n------------------------------------------\n\nStarting at: " + datetime.now().replace(microsecond=0).isoformat())

	pgslog.info("Args entered: \n" + str(vars(args)))

	prefs = extra.DictToObject(**json.load(open(args.prefs)))
	glbl.init()

	def assure_primefile():
		if not os.path.isfile(args.primefile):
			try:
				num_primef = open("./NUM_PRIMES")
				num_primes = int(num_primef.read())
				num_primef.close()
			except:
				num_primes = 1000000000
			pgslog.error("No prime file. Generating one now.")
			os.system("./libpgs.o {0} {1}".format(args.primefile, num_primes))

	if args.offline:
		assure_primefile()
		runners = []
		for i in range(0, prefs.threads):
			runners.append(extra.Runner(prefs.run_file, args.primefile, False, args.file))
		while True:
			time.sleep(10)
	else:
		try:
			import pyrebase
		except:
			pgslog.error("Pyrebase not installed. Trying to install now")
			import pip
			pip.main(['install', 'pyrebase', '--user'])
			import pyrebase
		appConfig = {
			# public API key
			"apiKey": "AIzaSyC6R2fqZN9eRFzr88nebDqvA_VwNKtzJQY",
			"authDomain": "pgsdb-c4faf.firebaseapp.com",
			"databaseURL": "https://pgsdb-c4faf.firebaseio.com",
			"storageBucket": "pgsdb-c4faf.appspot.com"
		}
		glbl.firebase = pyrebase.initialize_app(appConfig)
		glbl.usr = glbl.firebase.auth().sign_in_with_email_and_password(prefs.email, prefs.password)
		refresh = extra.AutoRefresh()
		refresh.refresh()
		if args.download > 0:
			findsp = open(args.file, "a+")
			for wl in extra.get_workloads(args.download):
				fp = open("workloads/{0}".format(wl[0]), "w+")
				fp.write(json.dumps(wl[1].__dict__))
				findsp.write("\n" + wl[0])
				fp.close()
			findsp.close()
		elif args.submit:
			findsp = open(pgslog.FINDS)
			print glbl.usr.keys()
			for x in findsp.read().split("\n"):
				glbl.firebase.database().child("user_data").child(glbl.usr["userId"]).child("finds").child(hash(x)).set(x, token=glbl.usr["idToken"])
			findsp.close()
			findsp = open(args.file)
			for x in findsp.read().split("\n"):
				if x.endswith("DONE"):
					glbl.firebase.database().child("user_data").child(glbl.usr["userId"]).child("workloads").child(hash(x)).set(x, token=glbl.usr["idToken"])
			findsp.close()

		else:
			assure_primefile()
			
			runners = []
			for i in range(0, prefs.threads):
				runners.append(extra.Runner(prefs.run_file, args.primefile))
			
			while True:
				time.sleep(10)

if __name__ == "__main__":
	exit(main())

