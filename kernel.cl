/*

OpenCL kernel for PGS

*/

//Returns bit
int chbit(int x, int b) {
    return (x >> b) & 1;
}

/*

Kernel for testing quadratics against a prime array.

*/
__kernel void test_quadratics(__constant int *pr) {
    int i = get_global_id(0);
    int j = get_global_id(1);
    int k = get_global_id(2);

    int x, y;
    int evals[101];
    int inarow = 0;

    evals[0] = abs(i); //i + 0 * j + 0 * 0 * k
    if (chbit(pr[evals[0] >> 5], evals[0] % 32) == 0) return;
    evals[1] = abs(i + j + k); //i + j * 1 + k * 1 * 1
    if (chbit(pr[evals[1] >> 5], evals[1] % 32) == 0) return;
    inarow = 2;

    for (x = 2; x < 101; ++x) {
        evals[x] = abs(i + x * (j + k * x));
        if (chbit(pr[evals[x] >> 5], evals[x] % 32) == 1) {
            inarow = x + 1;
        } else {
            break;
        }
    }
    
    if (inarow < 40) {
        return;
    }

    int distinct;
    int hbd = 1;
    for (x = 0; x <= inarow; ++x) {
        if (hbd == 0 || x == inarow) {
            if (x == inarow) {
                distinct = x;
            }
            break;
        }
        for (y = 0; y < x; ++y) {
            if (evals[y] == evals[x]) {
                hbd = 0;
                distinct = x;
                break;
            }
        }
    }
    if ((inarow >= 60 || distinct >= 40) && distinct > 1) {
        printf("PGSO: %d, %d; [%d, %d, %d]\n", inarow, distinct, i, j, k);
    }
}