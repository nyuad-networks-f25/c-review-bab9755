#include "status.h"
#include <stdio.h>
#include "foobar.h"
int main() {
    printf("Value of ENROLLED: %d\n", ENROLLED);

    int user_input;
    printf("Please enter an integer: ");
    scanf("%d", &user_input);
    foobar(user_input);
    return 0;
}