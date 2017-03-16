/*
 * lib.c -- library for calculating primes
 *
 * C ChemicalDevelopment 2017
 *   Part of the PGS project.
 *   <http://pgs.chemicaldevelopment.us/>
 *
 * Authors:
 *   Cade Brown <cade@cade.site>
 *
 * PGS is free software; you can redistribute it and/or modify it under the terms of the GNU GPL v3 or later, at your choice. See details in LICENSE.txt
 *
 */

#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[]) {
    char * file_name = argv[1];
    int max = strtoll(argv[2], NULL, 10), size = (int)(max / 32), bound = max>>1, i, j;
    int *bitset = (int *)malloc(sizeof(int) * (size + 1));
    for (i = 0; i < 20; ++i) bound = (bound + max / bound) >> 1;
    printf("%d\n", bound);
    for (i = 0; i < size; ++i) {
        bitset[i] = 0xaaaaaaaa;
    }
    for (i = 3; i < bound+1; i += 2) {
        if ((bitset[i/32] >> (i % 32)) & 1) {
            for (j = 3 * i; j < max; j += 2*i) {
                bitset[j/32] &= ~(1 << (j % 32));
            }
        }
    }
    FILE *file = fopen(file_name, "w");
    fwrite(bitset, sizeof(int), size, file);
    exit (0);
}