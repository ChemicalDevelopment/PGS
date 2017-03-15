
CC=gcc
PRIME_FILE=primes.dat
NUM_PRIMES=$(shell cat NUM_PRIMES)

install: CPGS libpgs
	cp ./example.prefs ./output/my.prefs

	touch workloads/pending.txt
	touch output/output.txt
	touch output/error.txt
	touch output/finds.txt

	./libpgs.o $(PRIME_FILE) $(NUM_PRIMES)

CPGS: src-CPGS/PGS.c
	gcc $< -o CPGS.o

libpgs: src-libpgs/lib.c
	gcc $< -lm -o libpgs.o


