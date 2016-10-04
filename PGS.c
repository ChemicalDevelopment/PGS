#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int *pr;

int chbit(int x, int b)
{
    return (x >> b) & 1;
}

//Tests i + jx + kx^2
void test_quadratic(int i, int j, int k)
{
    int x, y;
    int evals[101];
    int inarow = 0;

    evals[0] = abs(i); //i + 0 * j + 0 * 0 * k
    if (chbit(pr[evals[0] >> 5], evals[0] % 32) == 0)
        return;
    evals[1] = abs(i + j + k); //i + j * 1 + k * 1 * 1
    if (chbit(pr[evals[1] >> 5], evals[1] % 32) == 0)
        return;
    inarow = 2;

    for (x = 2; x < 101; ++x)
    {
        evals[x] = abs(i + x * (j + k * x));
        if (chbit(pr[evals[x] >> 5], evals[x] % 32) == 1)
        {
            inarow = x + 1;
        }
        else
        {
            break;
        }
    }

    if (inarow < 40)
    {
        return;
    }

    int distinct;
    int hbd = 1;
    for (x = 0; x <= inarow; ++x)
    {
        if (hbd == 0 || x == inarow)
        {
            if (x == inarow)
            {
                distinct = x;
            }
            break;
        }
        for (y = 0; y < x; ++y)
        {
            if (evals[y] == evals[x])
            {
                hbd = 0;
                distinct = x;
                break;
            }
        }
    }
    if ((inarow >= 60 || distinct >= 40) && distinct > 1)
    {
        printf("PGSO: %d, %d; [%d, %d, %d]\n", inarow, distinct, i, j, k);
        fflush(stdout);
    }
}

//Sets pr buf to bitset of primes, calculated by bitset
void get_primes(const char *primefile) {
    FILE *fp = fopen(primefile, "r");
    fseek(fp, 0L, SEEK_END);
    long NUM_READS = ftell(fp) / 4;
    fclose(fp);
    FILE *f = fopen(primefile, "r");
    pr = (int *)malloc(sizeof(int) * NUM_READS);
    printf("Init prime buf\n");
    long i;
    for (i = 0; i < NUM_READS; ++i) {
        fread(&pr[i], sizeof(int), 1, f);
    }
    fclose(f);
}

//./PGS.o r0 r1 r2 o0 o1 o2
int main(int argc, char *argv[])
{
    //Ranges
    int r0 = 2000, r1 = 2000, r2 = 2000;
    //Offsets
    int o0 = 0, o1 = 0, o2 = 0;
    char *fn = "./primes.dat";
    if (argc > 1) fn = argv[1];
    if (argc > 2) r0 = strtol(argv[2], NULL, 0);
    if (argc > 3) r1 = strtol(argv[3], NULL, 0);
    if (argc > 4) r2 = strtol(argv[4], NULL, 0);
    if (argc > 5) o0 = strtol(argv[5], NULL, 0);
    if (argc > 6) o1 = strtol(argv[6], NULL, 0);
    if (argc > 7) o2 = strtol(argv[7], NULL, 0);
    int i, j, k;
    //2 billion should be default
    get_primes(fn);
    printf("Read in primes\n");
    int ti = (int)time(NULL);
    for (i = o0; i < r0 + o0; ++i)
    {
        for (j = o1; j < r1 + o1; ++j)
        {
            for (k = o2; k < r2 + o2; ++k)
            {
                test_quadratic(i, j, k);
            }
        }
        if ((i - o0) % (r0 / 10) == 0) {
            printf("PGSP: %d\n", 100 * (i - o0) / (r0 - 1));
            fflush(stdout);
        }
    }
    printf("\nTook %d\n", (int)time(NULL) - ti);
    fflush(stdout);
}