#include <stdio.h>

void foobar(int n) {
    if (n % 3 == 0) {
        printf("foo\n");
    } else if (n % 5 == 0) {
        printf("bar\n");
    } else if (n % 3 == 0 && n % 5 == 0) {
        printf("foobar\n");
    } else {
        printf("%d is not divisible by 3 or 5\n", n);
    }
}