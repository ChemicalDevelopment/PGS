#include "poly.h"

#include <stdlib.h>
#include <math.h>

void poly_init(poly_t * poly, int N, int64_t * data) {
    poly->data = (int64_t *)malloc(sizeof(int64_t) * N);
    poly->N = N;
    int i;
    for (i = 0; i < N; ++i) {
        if (i < POLY_CACHE_SIZE) {
            poly->data_cache[i] = (data == NULL) ? 0 : data[i];
        }
        poly->data[i] = (data == NULL) ? 0 : data[i];
    }
}

poly_t poly_copy(poly_t * p) {
    poly_t r;
    poly_init(&r, p->N, p->data);
    return r;
}


void poly_free(poly_t * poly) {
    poly->N = 0;
    free(poly->data);
    poly->data = NULL;
}

void poly_ensurecache(poly_t * poly) {
    int i;
    for (i = 0; i < poly->N && i < POLY_CACHE_SIZE; ++i) {
        poly->data_cache[i] = poly->data[i];
    }
}

int64_t poly_eval(poly_t * poly, int64_t x) {
    uint64_t r = 0, x_i = 1;
    int i;
    for (i = 0; i < poly->N  && i < POLY_CACHE_SIZE; ++i) {
        r += poly->data_cache[i] * x_i;
        x_i *= x;
    }
    while (i < poly->N) {
        r += poly->data[i] * x_i;

        x_i *= x;
        i++;
    }
    return r;
}

char * poly_expr(poly_t * poly) {
    char * res = malloc(16);
    res[0] = (char)0;
    int res_size = 0;

    int i;
    for (i = poly->N - 1; i >= 0; i--) {
        int64_t cur_coef = poly->data[i];
        if (cur_coef > 1) {
            res_size += 16 + (int)ceil(log((double)cur_coef) / log(10.0));
        } else {
            res_size += 16;
        }
        res = (char *)realloc(res, res_size + 1);
        if (cur_coef != 0) {
            if (i == 0) {
                sprintf(res, "%s%+lld", res, cur_coef);
            } else if (i == 1) {
                if (cur_coef == 1) sprintf(res, "%s+x", res);
                else sprintf(res, "%s%+lldx", res, cur_coef);
            } else if (i == poly->N - 1) {
                if (cur_coef == 1) sprintf(res, "%sx^%d", res, i);
                else sprintf(res, "%s%lldx^%d", res, cur_coef, i);
            } else {
                sprintf(res, "%s%+lldx^%d", res, cur_coef, i);
            }
        }

    }
    return res;
}


