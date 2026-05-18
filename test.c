#include <stdio.h>

int factorial(int num) {
    if (num == 0) {
        return 1;
    }

    return num * factorial(num - 1);
}

void main(void) {
    int x = 0;

    printf("Enter a number: ");
    scanf("%d", &x);

    x = factorial(x);

    printf("Factorial: %d", x);
}