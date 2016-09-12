#python lib.py $1
gcc lib.c -lm -o lib.o
./lib.o $1
cp primes.dat ../primes.dat
