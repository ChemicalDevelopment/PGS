//math lib
#include <math.h>

//bignum lib
#include <gmp.h>


#include <stdio.h>

//Returns 0 if prime
int isprime(long int x) {
    int max = (int)floor(sqrt(x));
    max += 2;
    int i;
    for (i = 2; i < max; i++) {
        if (x % i == 0) {
            return 1;
        }
    }
    return 0;
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

