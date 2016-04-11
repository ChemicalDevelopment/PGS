//Standard io
#include <stdio.h>

//INtegers
#include <stdint.h>

//basic c math lib
#include <math.h>

//Our own math lib, in this same project
#include "PGSlib.h"

//Default max coefficient to search
#define MAX_CO 250


//How many x values to cap at?
#define MAX_X 101

//How many primes in a notable function
#define NOTABLE_PRIMES 51

#define NOTABLE_DISTINCT_PRIMES 44

#define MIN_DIST_PRIMES 5

#define PRINT_POLY_DESC 0
#define PRINT_POLY_END 1


//Which one do we use?
#define PRINT_POLY 0


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



// Prints out the polynomial. Code 0
void printfPolynomial_descending(int p[], int l) {
    if (l == 0) return;
    if (l == 1) {
        printf("%d", p[0]);
        return;
    }
    int i;
    int leading = p[l-1];
    if (leading == 1) {
        printf("x");
    } else if (leading == -1) {
        printf("-x");
    } else {
        printf("%dx", leading);
    }
    if (l > 2) printf("^%d", l-1);
   
    for (i = l-2; i > 0; i--) {
        if (p[i] == 0) continue;
        if (p[i] > 1) {
            printf(" + %dx", p[i]);
        } else if (p[i] < -1) {
            printf(" - %dx", -p[i]);
        } else if (p[i] == 1) {
            printf(" + x");
        } else {
            printf(" - x");
        }
        if (i > 1) printf("^%d", i);
    }
   
    if (p[0] > 0) printf(" + %d", p[0]);
    if (p[0] < 0) printf(" - %d", -p[0]);
}

//Prints out the polynomial. Code 1
void printfPolynomial_endian(int p[], int l) {
    if (l == 0) return;
    printf("%d", p[0]);
    int i, coef;
    for (i = 1; i < l; i++) {
        coef = p[i];
        if (coef == 0) continue;
        if (i == 1) {
            printf(" + %dx", coef);
        } else {
            printf(" + %dx^%d", coef, i);
        }
    }
}

void printfPolynomial(int p[], int l) {
    if (PRINT_POLY == PRINT_POLY_DESC) printfPolynomial_descending(p, l);
    if (PRINT_POLY == PRINT_POLY_END) printfPolynomial_endian(p, l);
}


void print_primes_g_max(int primes) {
    int i;
    for (i = 0; i < primes; ++i) {
        printf("%d is prime: %d\n", i, isprime(i));
    }
}


//Returns 1 if a contains b, 0 if not
int contains(int a[], int b, int len) {
    int i;    
    for (i = 0; i < len; ++i) {
        if (a[i] == b) return 1; 
    }
    return 0;
}

//Tests a polynomials and spits out info
void testpoly(int p[], int l) {
    int evals[MAX_X]; //Create enough room to store results
    int x;
    int primes_ev = 0;
    int distinctprimes = 0;
    for (x = 0; x < MAX_X; ++x) {
        evals[x] = abs(eval(p, x, l));
        if (isprime(evals[x]) == 1) {
            ++primes_ev;
            if (contains(evals, evals[x], x) == 0) { //Don't check the most recent one
                ++distinctprimes;
            }
        } else break;
    }
    if ((primes_ev >= NOTABLE_PRIMES || distinctprimes >= NOTABLE_DISTINCT_PRIMES) && distinctprimes >= MIN_DIST_PRIMES) {
        printf("|");
        printfPolynomial(p, l);
        printf("| x = [0, %d] (%d in a row) (%d unique)", primes_ev - 1, primes_ev, distinctprimes);
        printf("\n");
    }
}


//Start generating random quadratic polynomials with length pl
void rand_3term() {
    int p[3];
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    int p0;
    int p1;
    int p2;
    for (p0 = -MAX_CO; p0 < MAX_CO; ++p0) {
        if (p0 == 0) continue;
        p[0] = p0;
        for (p1 = -MAX_CO; p1 < MAX_CO; ++p1) {//This one can be zero
            p[1] = p1;
            for (p2 = -MAX_CO; p2 < MAX_CO; ++p2) {
                p[2] = p2;
                testpoly(p, 3);
            }
        }
    }
}

//Main method
int main(int argc, char *argv[]) {
    init();
    if (argc == 1) { //If no arguments
        printf("Now printing out quadratic functions that are prime for the first %d values of x.\n", NOTABLE_PRIMES);
        rand_3term();
    }
}


