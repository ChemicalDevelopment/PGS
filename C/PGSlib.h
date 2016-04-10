//math lib
#include <math.h>

//bignum lib
#include <gmp.h>

#include <stdio.h>
#include <stdlib.h>

//Finds primes up to 2^exp
#define PRIMETEST_EXP 23

#define DIV_CUTOFF 200

//2^exp for smaller arr
#define SHORT_BS_CUTOFF_EXP 12

int *primes = NULL;

int *smallPrimes = NULL;

int arrL;

int shrt_arrL;

//returns signum
int sgn(int x) {
    return (x > 0) - (x < 0);
}

//Finds primes and stores them
void init() {
    int numPrimes = (int)floor(pow(2, PRIMETEST_EXP));
    int *firstArr = malloc(sizeof(int) * numPrimes * 25); //Get enough for every single number
    int i, j;
    int cpi = 0; //current prime index
    printf("Starting to sieve all numbers <= %d\n", numPrimes);
    for (i = 0; i < numPrimes * 20; ++i) { //Puts all integers
        firstArr[i] = i + 2;
    }

    for (i = 0; i < numPrimes * 20; ++i){
        if (firstArr[i] != -1){
            for (j= 2 * firstArr[i] - 2; j < numPrimes; j += firstArr[i]) {
                firstArr[j]=-1;
            }
            ++cpi;
        }
        if (cpi = numPrimes) {
            break;
        }
    }
    j = 0; //Used in next loop
    primes = malloc(sizeof(int) * (numPrimes + 2));
    int numSmallPrimes = (int)floor(pow(2, SHORT_BS_CUTOFF_EXP));
    smallPrimes = malloc(sizeof(int) * (numSmallPrimes + 2));
    

    for (i = 0; i < numPrimes * 20; ++i) {
        if (firstArr[i] != -1) {
            if (j < numSmallPrimes) { //store in small array as well
                smallPrimes[j] = firstArr[i];
                shrt_arrL = j + 1;
            }
            primes[j] = firstArr[i];
            ++j;
        }
        if (j == numPrimes) {
            break;
        }
    }

    arrL = j;
    free(firstArr);
    printf("Done sieving!\n");
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


int isprime_bs_mn(int x) {
    int i;
    int ind = pow(2, SHORT_BS_CUTOFF_EXP - 1);
    int primes_ind;
    int curMover = ind / 2;
    for (i = 0; i < SHORT_BS_CUTOFF_EXP; ++i) {
        primes_ind = primes[ind];
        if (primes_ind == x) return 1;
        ind += sgn(x - primes_ind) * curMover;
        curMover /= 2;
        if (curMover == 0) curMover = 1;
    }
    return 0;
}


//Needs optimization,
//Returns 0 if prime, binary searching the pointer of primes you used init() for, and just divides if it would be faster
int isprime_bs(int x) {
    int i;
    int ind = arrL / 2;
    int primes_ind;
    int arrL_div2i = arrL / 4;
    for (i = 0; i <= PRIMETEST_EXP; ++i) {
        primes_ind = primes[ind];
        if (primes_ind == x) {
            return 1;
        }
        ind += sgn(x - primes_ind) * arrL_div2i;
        arrL_div2i /= 2;
        if (arrL_div2i < 1) arrL_div2i = 1;
    }
    return 0; //if we couldn't find it             
}


//Endall isprime method, returns 1 if prime
int isprime(int x) {
    if (x <= DIV_CUTOFF) return isprime_div(x);
    if (x <= shrt_arrL) return isprime_bs_mn(x);
    return isprime_bs(x);
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

