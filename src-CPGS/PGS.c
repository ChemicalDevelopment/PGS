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
 * PGS is free software; you can redistribute it and/or modify 
 * it under the terms of the GNU GPL v3 or later, at your choice. 
 * See details in LICENSE.txt
 *
 */

#include <stdio.h>
#include <stdlib.h>

int *pr;

int MAX_PRIMES = -1;

#define NOTABLE_PRIMES 38

#define chbit(x, b) ((x >> b) & 1)
#define isprime(x) (chbit(pr[(x) / 32], (x) % 32) == 1)

void test_quadratic(int i, int j, int k)
{
    int x, y;
    // optimized cases
    if (!isprime(i)) return;
    if (!isprime(i+j+k)) return;

    for (x = 2; x < 101; ++x) {
        y = i + x * (j + k * x);
        if (y > MAX_PRIMES) {
            fprintf(stderr, "PGS (E): Went over MAX_PRIME\n");
            goto end;
        }
        if (!isprime(y)) {
            goto end;
        }
    }
    end:;
    if (x >= NOTABLE_PRIMES && k != 0)
    {
        printf("PGS (O): %d; [%d, %d, %d]\n", x, i, j, k);
        fflush(stdout);
    }
}

//Sets pr buf to bitset of primes, calculated by bitset
void get_primes(const char *primefile)
{
    FILE *fp = fopen(primefile, "r");
    fseek(fp, 0L, SEEK_END);
    int tellsize = ftell(fp);
    MAX_PRIMES = tellsize << 3;
    printf("MAX PRIME: %d\n", MAX_PRIMES);
    fclose(fp);
    FILE *f = fopen(primefile, "r");
    pr = (int *)malloc(sizeof(int) + tellsize);
    int i;
    for (i = 0; i < tellsize / sizeof(int); ++i)
    {
        fread(&pr[i], sizeof(int), 1, f);
    }
    fclose(f);
}

//./PGS.o FILE o0 o1 o2 r0 r1 r2
int main(int argc, char *argv[])
{
    // offsets, ranges
    int o0, o1, o2, r0, r1, r2;
    char *fn;

    if (argc <= 7) {
        fprintf(stderr, "PGS (E): Not enough arguments");
        exit (1);
    }

    fn = argv[1];
    o0 = strtol(argv[2], NULL, 0);
    o1 = strtol(argv[3], NULL, 0);
    o2 = strtol(argv[4], NULL, 0);
    r0 = strtol(argv[5], NULL, 0);
    r1 = strtol(argv[6], NULL, 0);
    r2 = strtol(argv[7], NULL, 0);
        
    int i, j, k;
    get_primes(fn);
    for (i = o0; i < r0 + o0; ++i)
    {
        for (j = o1; j < r1 + o1; ++j)
        {
            for (k = o2; k < r2 + o2; ++k)
            {
                test_quadratic(i, j, k);
            }
        }
        if ((i - o0) % (r0 / 10) == 0)
        {
            printf("PGS (P): %d\n", 100 * (i - o0) / (r0 - 1));
            fflush(stdout);
        }
    }

    fflush(stdout);
    fflush(stderr);
    
}
