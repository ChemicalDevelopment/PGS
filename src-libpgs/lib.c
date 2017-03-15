#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    char * file_name = argv[1];
    int max = strtoll(argv[2], NULL, 10);
    int size = (int)(max / sizeof(int));
    int *bitset = (int *)malloc(size + sizeof(int));
    int i, j;
    for (i = 0; i < 2; ++i) {
        bitset[i/32] &= ~(1 << (i % 32));
    }
    bitset[0] |= 1 << (2);
    for (i = 3; i < max; i += 2) {
        bitset[i/32] |= 1 << (i % 32);
    }
    for (i = 3; i < (int)(ceil(sqrt(max))); ++i) {
        if ((bitset[i/32] >> (i % 32)) & 1) {
            for (j = 2 * i; j < max; j += i) {
                bitset[j/32] &= ~(1 << (j % 32));
            }
        }
    }
    /*
    for (i = 0; i < max; ++i) {
        if ((bitset[i/32] >> (i % 32)) & 1) {
            printf("%d, ", i);
        }
        
    }*/
    FILE *file = fopen(file_name, "w");
    fwrite(bitset, sizeof(int), max>>5, file);
    exit (0);
}