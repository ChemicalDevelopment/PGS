//Standard io
#include <stdio.h>

//basic c math lib
#include <math.h>

//Our own math lib, in this same project
#include "PGSlib.h"

//Default max coefficient to search
#define MAX_CO 250


//How many x values to cap at?
#define MAX_X 101

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
void printfPolynomial(int p[], int l) {
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


//Start generating random quadratic polynomials with length pl
void rand_3term() {
    int p[3];
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    int p0;
    int p1;
    int p2;
    int x;
    int primesinarow = 0;
    int p_x;
    for (p0 = -MAX_CO; p0 < MAX_CO; ++p0) {
        if (p0 == 0) continue;
        p[0] = p0;
        for (p1 = -MAX_CO; p1 < MAX_CO; ++p1) {//This one can be zero
            p[1] = p1;
            for (p2 = 0; p2 < MAX_CO; ++p2) {
                if (p2 == 0 && p1 == 0) continue;
                p[2] = p2;
                primesinarow = 0;
                for (x = 0; x <= MAX_X; ++x) {
                    p_x = eval(p, x, 3);
                    if (isprime(p_x)) { //If it is prime
                        ++primesinarow;
                    } else {
                        break;
                    }
                }
                if (primesinarow >= NOTABLE_PRIMES) { //The five is based on how we show it
                    printfPolynomial(p, 3);
                    printf("  is prime for x = 0, 1, ... %d, %d", primesinarow - 2, primesinarow - 1);
                    printf("\n");
                }
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
    } else {

    }
}


