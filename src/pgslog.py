###
# pgslog.py -- Logging and fileIO in python
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

INFO="output/output.txt"
FINDS="output/finds.txt"
ERROR="output/error.txt"

def info(txt):
	txt = str(txt)
	txt = txt + "\n"
	with open(INFO, "a+") as fp:
		fp.write(txt)
		fp.close()
		sys.stdout.write(txt)
		sys.stdout.flush()

def error(txt):
	txt = str(txt)
	txt = txt + "\n"
	info("ERROR: " + txt)
	with open(ERROR, "a+") as fp:
		fp.write(txt)
		fp.close()
		sys.stderr.write(txt)
		sys.stdout.flush()

def find(txt):
	txt = str(txt)
	txt = txt + "\n"
	info("FIND: " + txt)
	with open(FINDS, "a+") as fp:
		fp.write(txt)
		fp.close()

