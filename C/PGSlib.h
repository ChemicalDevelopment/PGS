//math lib
#include <math.h>

//bignum lib
#include <gmp.h>

#include <stdio.h>
#include <stdlib.h>

#define MAX_PRIME_TEST 100000

int *primes = NULL;

int arrL = 0;

int lg2arrL = 0;

void init() {
    int i;
    int cprimeind = 0;
    primes = malloc(sizeof(int) * primeCount_app(MAX_PRIME_TEST));
    for (i = 2; i < MAX_PRIME_TEST; ++i) {
        if (isprime_div(i) == 0) {
            primes[cprimeind] = i;
            ++cprimeind;
        }
    }
    arrL = cprimeind;
    lg2arrL = (int)floor(log(arrL) / log(2));
}

int primeCount_app(int max) {
    return 20000;
}

//Returns 0 if prime
//For long computations, please use precomputed tables
int isprime_div(long int x) {
    if (x == 1) return 1;
    int i;
    int max;
    if (x > 24) {
        max = floor(sqrt(x + 1));
    } else {
        max = x;
    }
    for (i = 2; i < max; i++) {
        if (x % i == 0) {
            return 1;
        }
    }
    return 0;
}

//Returns 0 if prime, binary searching the pointer of primes you used init() for
int isprime_bs(long int x) {
    if (x < 29) return isprime_div(x);
    int i;
    int ind = arrL / 2;
    int primes_ind = 0;
    int arrL_div2i = arrL / 4;
    for (i = 0; i <= lg2arrL + 1; ++i) {
        primes_ind = primes[ind];
        if (primes_ind == x) {
            return 0;
        }
        if (primes_ind > x) { //we overshot
            ind -= arrL_div2i;
        } else {
            ind += arrL_div2i;
        }
        arrL_div2i /= 2;
        if (arrL_div2i < 1) arrL_div2i = 1;
    }
    return 1; //if we couldn't find it             
}

//Evaluates p(x)
long int eval(long int p[], long int x, int terms) {
    long int sum = 0; //Our sum
    int n; //Exponent
    long int x_n = 1; //x^n
    for (n = 0; n < terms; ++n) {
        sum += x_n *p[n]; //Add our current place value
        x_n = x_n * x; //Multiply to get the next exponent
    }
    return sum;
}

