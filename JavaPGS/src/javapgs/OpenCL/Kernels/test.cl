
/*

OpenCL kernel for testing polynomials primality, given a sieve

*/

__kernel void test(__global const int *prefs, __global const short *prime_arr, __global const int *coef_offset) { 
    int i = get_global_id(0) + coef_offset[0]; //f(x) = i + jx + kx^2
    int j = get_global_id(1) + coef_offset[1];
    int k = get_global_id(2) + coef_offset[2];
    int x, y;
    int evals[101];
    int inarow = 0;
    int distinct = 0;
    short hbdist = 1;
    for (x = 0; x < 101; ++x) {
        evals[x] = abs(i + j * x + k * x * x);
        if (hbdist == 1) {
            for (y = 0; y < x; ++y) {
                if (evals[x] == evals[y]) {
                    hbdist = 0;
                    break;
                } 
                distinct = y;
            }
        }
        if (prime_arr[evals[x]] == 1) {
            ++inarow;
        } else {
            break;
        }
    }
    ++distinct;
    if ((inarow >= prefs[0]  || distinct >= prefs[1]) && inarow != 101) {
        printf("%d + %dx + %dx^2 is prime for %d (x = [0, %d]) (distinct for %d)\n", i, j, k, inarow, inarow - 1, distinct);
    }
}
