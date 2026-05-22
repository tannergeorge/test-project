#include <stdio.h>
#include <string.h>

int factorial(int num) {
    if (num == 0) {
        return 1;
    }

    return num * factorial(num - 1);
}

int sum(int num) {
    if (num == 0) {
        return 0;
    }

    return num + sum(num - 1);
}

int sum_even(int num) {
    if (num == 0) {
        return 0;
    }

    if (num % 2 == 0) {
        return num + sum(num - 1);
    } else {
        return sum(num - 1);
    }
}

int f(int (*operation)(int), int n) {
    int out = 0;

    out = operation(n);

    return out;
}

void main(void) {
    int x = 0;
    char func[80];

    printf("Enter a number and operation: ");
    scanf("%d %s", &x, &func);

    if (strcmp(func, "factorial") == 0) {
        x = f(factorial, x);
    } else if (strcmp(func, "sum")) {
        x = f(sum, x);
    } else {
        x = f(sum_even, x);
    }

    printf("Result: %d", x);
}