#include <stdio.h>
void system_sizes() {
    printf("Size of int: %zu\n", sizeof(int));
    printf("Size of char: %zu\n", sizeof(char));
    printf("Size of short: %zu\n", sizeof(short));
    printf("Size of long: %zu\n", sizeof(long));
    printf("Size of long long: %zu\n", sizeof(long long));
}