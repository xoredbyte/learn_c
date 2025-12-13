#include <stdint.h>
#include <stdio.h>
#include <x86intrin.h>

uint64_t measure_access_time(void *addr) {
    uint64_t start, end;
    start = __rdtsc();
    *(volatile char *)addr;
    end = __rdtsc();
    return end - start;
}

int main() {
    char *data = malloc(4096);

    // Warm it (put in cache)
    data[0] = 1;

    uint64_t t1 = measure_access_time(&data[0]);
    printf("First access (cache): %lu cycles\n", t1);

    // Evict from cache using clflush
    _mm_clflush(&data[0]);

    uint64_t t2 = measure_access_time(&data[0]);
    printf("Second access (RAM): %lu cycles\n", t2);

    return 0;
}
