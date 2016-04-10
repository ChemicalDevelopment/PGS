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

//Finds primes and stores them
void init() {
    int *firstArr = malloc(sizeof(int) * MAX_PRIME_TEST); //Get enough for every single number
    int i, j;
    int cpi = 0; //current prime index
    for (i = 0; i < MAX_PRIME_TEST; ++i) { //Puts all integers
        firstArr[i] = i + 2;
    }

    for (i = 0; i < MAX_PRIME_TEST; ++i){
        if (firstArr[i] != -1){
            for (j= 2 * firstArr[i] - 2; j < MAX_PRIME_TEST; j += firstArr[i]) {
                firstArr[j]=-1;
            }
            ++cpi;
        }
    }
    j = 0; //Used in next loop
    primes = malloc(sizeof(int) * cpi);
    
    for (i = 0; i < MAX_PRIME_TEST; ++i) {
        if (firstArr[i] != -1) {
            primes[j] = firstArr[i];
            ++j;
        }
    }

    arrL = j;
    lg2arrL = (int)ceil(log(arrL) / log(2));
    free(firstArr);
}
//Returns 0 if prime
//For long computations, please use precomputed tables
int isprime_div(long int x) {
    if (x == 1) return 1;
    int i;
    int max;
    max = floor(sqrt(x));
    for (i = 2; i < max; i++) {
        if (x % i == 0) {
            return 1;
        }
    }
    return 0;
}

//Needs optimization,
//Returns 0 if prime, binary searching the pointer of primes you used init() for, and just divides if it would be faster
int isprime_bs(long int x) {
    if (x < 1000) return isprime_div(x);
    int i;
    int ind = arrL / 2;
    int primes_ind = 0;
    int arrL_div2i = arrL / 4;
    for (i = 0; i <= lg2arrL; ++i) {
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

