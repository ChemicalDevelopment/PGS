import argparse
import json
import time
from datetime import datetime    

import pyrebase

from extra import extra
import glbl
import pgslog

def main():
	parser = argparse.ArgumentParser(description="PGS - Prime Generator Search", version="2.2.5", add_help=True)
	parser.add_argument('-p', '--prefs', type=str, default="my.prefs", help='Preferences file')
	parser.add_argument('-off', '--offline', action='store_true', help='Offline mode')
	parser.add_argument('-f', '--file', type=str, default="workloads/pending.txt", help='File for local workloads')
	parser.add_argument('-sm', '--submit', action='store_true', help='Submit output/finds.txt to the server')
	parser.add_argument('-dl', '--download', type=int, default=-1, help='Downloads workloads into workloads/')

	args = parser.parse_args()

	pgslog.info("---------------------\nStarting at: " + datetime.now().replace(microsecond=0).isoformat())

	prefs = extra.DictToObject(**json.load(open(args.prefs)))
	glbl.init()

	if args.offline:
		extra.Runner(prefs.run_file, False, args.file)
		while True:
			time.sleep(10)
	else:
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
			extra.Runner(prefs.run_file)
			while True:
				time.sleep(10)

if __name__ == "__main__":
	exit(main())

