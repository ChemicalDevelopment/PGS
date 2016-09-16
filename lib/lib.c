#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int set_bit(v, index, x) {
    int mask = 1 << index;
    v &= ~mask;
    if (x == 1) {
        v |= mask;
    }
    return v;
}

int get_bit(v, index) {
    return (v >> index) & 1;
}

int main(int argc, char *argv[]) {
    long x = 2000000000;//strtoll(argv[1], NULL, 10);
    int *bitset = (int *)malloc(sizeof(int) * (x / 32 + 1));
    if (x % 32 != 0) {
        x += 32 - (x % 32);
    }
    int i, j, bound;
    for (i = 0; i < x / 32; ++i) {
        bitset[i] = ~0;
    }
    bitset[0] = set_bit(bitset[0], 0, 0);
    bitset[0] = set_bit(bitset[0], 1, 0);
    bound = x / 3;
    for (i = 0; i < 12; ++i) {
        bound = (bound + x / bound) / 2;
    }
    bound += 2;
    for (i = 2; i < bound; ++i) {
        if (i % (bound / 1000) == 0 || i < 1000) {
            printf("%%%d Done\r", (int)(100 * log(i) / log(bound)));
            fflush(stdout);
        }
        if (get_bit(bitset[i / 32], i % 32) == 1) { 
            for (j = 2 * i; j < x; j += i) {
                bitset[j / 32] = set_bit(bitset[j / 32], j % 32, 0);
            }
        }
    }
    printf("\n\n");
    printf("Writing the file\n\n");
    //FILE *f = fopen("primes.dat", "w");
    FILE *f = fopen(argv[1], "w");
    for (i = 0; i < sizeof(bitset)/sizeof(bitset[0]); ++i) {
        fwrite(&bitset[i], sizeof bitset[i], 1, f);
    }
    printf("Done\n\n");
}
