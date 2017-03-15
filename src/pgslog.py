
import sys

INFO="output/output.txt"
FINDS="output/finds.txt"
ERROR="output/error.txt"

def info(txt):
	with open(INFO, "a+") as fp:
		fp.write(txt)
		fp.close()
		sys.stdout.write(txt)
		sys.stdout.flush()

def error(txt):
	info("ERROR: " + txt)
	with open(ERROR, "a+") as fp:
		fp.write(txt)
		fp.close()
		sys.stderr.write(txt)
		sys.stdout.flush()

def find(txt):
	info("FIND: " + txt)
	with open(FINDS, "a+") as fp:
		fp.write(txt)
		fp.close()

