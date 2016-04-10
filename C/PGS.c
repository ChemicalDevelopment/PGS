//Standard io
#include <stdio.h>

//basic c math lib
#include <math.h>

//Our bignum library, for larger than long ints
#include <gmp.h>

//Our own math lib, in this same project
#include "PGSlib.h"


//Default max coefficient to search
#define MAX_CO 500


//How many x values to cap at?
#define MAX_X 60

//How many primes in a notable function
#define NOTABLE_PRIMES 40

/* 
 * Copyright (C) 2016 ChemicalDevelopment
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

//Prints out the polynomial
void printfPolynomial(long int p[], int l) {
    if (l == 0) return;
    printf("%ld", p[0]);
    int i;
    for (i = 1; i < l; i++) {
        printf(" + %ldx^%d", p[i], i);
    }
}


//Start generating random quadratic polynomials with length pl
void rand_3term() {
    long int p[3];
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    int p0;
    int p1;
    int p2;
    int x;
    int primesinarow = 0;
    int p_x;
    for (p0 = 1; p0 <= MAX_CO; ++p0) {
        p[0] = p0;
        for (p1 = 1; p1 <= MAX_CO; ++p1) {
            p[1] = p1;
            for (p2 = 1; p2 <= MAX_CO; ++p2) {
                p[2] = p2;
                primesinarow = 0;
                for (x = 0; x < MAX_X; ++x) {
                    p_x = eval(p, x, 3);
                    if (isprime(p_x) == 0) { //If it is prime
                        ++primesinarow;
                    } else {
                        break;
                    }
                }
                if (primesinarow >= NOTABLE_PRIMES) {
                    printfPolynomial(p, 3);
                    printf("   is prime for the first %d values, starting at x = 0", primesinarow);
                    printf("\n");
                }
            }
        }
    }
}




//Main method
int main(int argc, char *argv[]) {
    if (argc == 1) { //If no arguments
        rand_3term();
    }
}


