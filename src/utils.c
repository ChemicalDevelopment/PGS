

#include <sys/time.h>

double get_time() {
    struct timeval c;
    gettimeofday(&c, NULL);
    return c.tv_sec + (double)c.tv_usec / 1000000.0;
}


