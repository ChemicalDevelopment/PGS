#compiles the one file
gcc lib.c -lm -o lib.o
#runs it with whatever arg you are using. Should be at least 1,000,000,000
./lib.o $1
#copies to main directory
cp primes.dat ../primes.dat
