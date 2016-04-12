
//Our kernel for testing polynomials!
/*

Structure of inputs:
l is the length of each polynomials
output is where we store how many primes in a row we found
pol is our array of l - 1 degree polynomials
start is the first polynomials we try
end is the last

*/
__kernel void test(__global const short *prime_arr, __global const int *p0, __global const int *p1, __global const int *p2) { //Ranges on the end
    int i = get_global_id(0); //f(x) = i + jx + kx^2
    int j = get_global_id(1);
    int k = get_global_id(2);
    int sum;
    int inarow = 0;
    int x;
    short t = 1;
    for (x = 0; x < 101; ++x) {
        sum = p0[i] + p1[j] * x + p2[k] * x * x;
        if (prime_arr[sum] == t) { //If it is prime
            ++inarow;
        } else { //If it isn't
            break;
        }
    }
    if (inarow >= 48 && inarow != 101) {
        printf("%d + %dx + %dx^2 is prime for %d\n", p0[i], p1[j], p2[k], inarow);
    }
}
