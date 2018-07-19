
/*

poly.h - polynomial datatypes

*/


#ifndef __POLY_H__
#define __POLY_H__

#include <stdint.h>

#define POLY_CACHE_SIZE 8

typedef struct _poly_s {

    // order of the polynomial
    int N;

    // the first POLY_CACHE_SIZE coefficients are stored here for quicker access
    int64_t data_cache[POLY_CACHE_SIZE];

    // all is stored here
    int64_t * data;

} poly_t;

// data can be NULL, in which case it is assumed to be zeros;
void poly_init(poly_t * poly, int N, int64_t * data);

void poly_ensurecache(poly_t * poly);

poly_t poly_copy(poly_t * p);

void poly_free(poly_t * poly);

int64_t poly_eval(poly_t * poly, int64_t x);

// caller is responsible for freeing
char * poly_expr(poly_t * poly);

#endif

