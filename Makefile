###
# Makefile -- for building!
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

# by default, use the default system c compiler. We probably don't need a fancy one (like gcc), because this is basic stuff
CC=cc

# these should probably not change
PRIME_FILE=primes.dat
NUM_PRIMES=$(shell cat NUM_PRIMES)

setup: CPGS libpgs
	cp ./example.prefs ./output/my.prefs

	touch workloads/pending.txt
	touch output/output.txt
	touch output/error.txt
	touch output/finds.txt

	./libpgs.o $(PRIME_FILE) $(NUM_PRIMES)

# this is only needed for online mode. For example, embedded devices do not need this, because you should download workloads, then use it.
install:
	pip install pyrebase --user

CPGS: src-CPGS/PGS.c
	gcc $< -o CPGS.o

libpgs: src-libpgs/lib.c
	gcc $< -o libpgs.o

