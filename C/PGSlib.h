//math lib
#include <math.h>

#include <stdio.h>
#include <stdlib.h>

//Finds primes and stores up to this number
#define BS_CUTOFF 10000000

//Stores a smaller array with this many
#define BS_SHORT_CUTOFF 300000

//Where do we just divide?
#define DIV_CUTOFF 20

int *primes = NULL;

int *smallPrimes = NULL;

int bs_max;

int bs_short_max;

//returns signum
int sgn(int x) {
    return (x > 0) - (x < 0);
}


//Finds primes and stores them
void init() {
    int *firstArr = malloc(sizeof(int) * BS_CUTOFF);
    int i, j, smallPrimes_l;
    int cpi = 0; //current prime index
    printf("Starting to sieve all numbers <= %d\n", BS_CUTOFF);
    for (i = 0; i < BS_CUTOFF; ++i) { //Puts all integers
        firstArr[i] = i + 2;
    }
    for (i = 0; i < BS_CUTOFF; ++i){
        if (firstArr[i] != -1){
            for (j= 2 * firstArr[i] - 2; j < BS_CUTOFF; j += firstArr[i]) {
                firstArr[j]=-1;
            }
            ++cpi;
        }
        if (i == BS_SHORT_CUTOFF) smallPrimes_l = cpi; 
    }
    j = 0; //Used in next loop
    primes = malloc(sizeof(int) * (cpi));
    smallPrimes = malloc(sizeof(int) * (smallPrimes_l));
    
    for (i = 0; i < BS_CUTOFF; ++i) {
        if (firstArr[i] != -1) {
            if (j < smallPrimes_l) { //store in small array as well
                smallPrimes[j] = firstArr[i];
            }
            primes[j] = firstArr[i];
            ++j;
        }
    }

    free(firstArr);
    bs_max = (int)ceil(log(BS_CUTOFF) / log(2));
    bs_short_max = (int)ceil(log(BS_SHORT_CUTOFF) / log(2));
    printf("Done sieving! There are %d primes under %d\n", cpi, BS_CUTOFF);
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


//Short binary search
int isprime_bs_mn(int x) {
    int i;
    int ind = BS_SHORT_CUTOFF / 2;
    int primes_ind;
    int curMover = ind / 2;
    for (i = 0; i < bs_short_max; ++i) {
        primes_ind = primes[ind];
        if (primes_ind == x) return 1;
        ind += sgn(x - primes_ind) * curMover;
        curMover /= 2;
        if (curMover == 0) curMover = 1;
    }
    return 0;
}


//Binary searches the long list
int isprime_bs(int x) {
    int i;
    int ind = BS_CUTOFF / 2;
    int primes_ind;
    int curMover = ind / 2;
    for (i = 0; i < bs_max; ++i) {
        primes_ind = primes[ind];
        if (primes_ind == x) return 1;
        ind += sgn(x - primes_ind) * curMover;
        curMover /= 2;
        if (curMover < 1) curMover = 1;
    }
    return 0; //if we couldn't find it             
}


//Endall isprime method, returns 1 if prime
int isprime(int x) {
    int a_x = abs(x);
    if (a_x == 0) return 0;
    if (a_x == 1) return 0;
    if (a_x == 2) return 1;
    if (a_x <= DIV_CUTOFF) return isprime_div(a_x);
    if (a_x <= BS_SHORT_CUTOFF) return isprime_bs_mn(a_x);
    if (a_x <= BS_CUTOFF) return isprime_bs(a_x);
    return isprime_div(a_x); //We start dividing to find if it is prime
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

