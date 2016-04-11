//math lib
#include <math.h>
#include <stdint.h>

#include <stdio.h>
#include <stdlib.h>

//Finds primes and stores up to this number
#define ARR_SIZE 5000000

//Very special structure
//uint64_t *primes = NULL;
short *primes = NULL;

//returns signum
int sgn(uint64_t x) {
    return (x > 0) - (x < 0);
}


int get_prime(uint64_t x) {
    return primes[x];
}

void set_prime(uint64_t x) {
    primes[x] = 1;
}

void set_notprime(uint64_t x) {
    primes[x] = 0;
}

/*
int get_prime(uint64_t x) {
    return ((primes[x / 64]) >> (x % 64)) & 1;
}

//Stores in our special structure
void set_prime(uint64_t num) {
    primes[(num / 64)] |= 1 << (num % 64);
}

void set_notprime(uint64_t num) {
    primes[(num / 64)] &= ~(1 << (num % 64));
}
*/

//Finds primes and stores them
void init() {
    primes = malloc(sizeof(short) * ARR_SIZE);
    uint64_t *firstArr  = malloc(sizeof(uint64_t) * ARR_SIZE);
    uint64_t i, j, smallPrimes_l;
    uint64_t cpi = 0; //current prime index
    printf("Starting to sieve all numbers <= %d\n", ARR_SIZE);
    for (i = 0; i < ARR_SIZE; ++i) { //Puts all integers
        firstArr[i] = i;
    }
    for (i = 2; i < ARR_SIZE; ++i){
        if (firstArr[i] != -1){
            set_prime(i);
            for (j= 2 * firstArr[i]; j < ARR_SIZE; j += firstArr[i]) {
                firstArr[j]=-1;
                set_notprime(j);
            }
            ++cpi;
        }
    }
    
    free(firstArr);
    printf("Done sieving! There are %lld primes under %d\n", (long long int)cpi, ARR_SIZE);
}

//Returns 1 if prime
//For long computations, please use precomputed tables
int isprime_div(int x) {
    if (x == 0) return 0;
    if (x == 1) return 0;
    int i;
    int max;
    max = floor(sqrt(x));
    for (i = 2; i < max; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}


int isprime_pos_only(uint64_t x) {
    if (x == 0 || x == 1) return 0;
    if (x < ARR_SIZE) return get_prime(x);
    else return 0; //todo implement miller rabin
}


//Endall isprime method, returns 1 if prime
int isprime(int64_t x) {
    return isprime_pos_only((uint64_t)(x * sgn(x)));
}

//Evaluates p(int eval(long int p[], long int x, int terms) {
int eval(int p[], int x, int terms) {
    int sum = 0; //Our sum
    int n; //Exponent
    int x_n = 1; //x^n
    for (n = 0; n < terms; ++n) {
        sum += x_n *p[n]; //Add our current place value
        x_n = x_n * x; //Multiply to get the next exponent
    }
    return sum;
}

