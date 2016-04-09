//Standard io
#include <stdio.h>

//basic c math lib
#include <math.h>

//Our bignum library, for larger than long ints
#include <gmp.h>

//Our own math lib, in this same project
#include "PGSlib.h"


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


//Main method
int main(int argc, char *argv[]) {
    int degree = 2;
    long int p[degree + 1];
    p[0] = 3;
    p[1] = 2;
    p[2] = 11;
    //p(x) = 11x^2 + 2x + 3
    long int r = eval(p, 5, degree + 1);
    printf("%ld\n", r);
}


