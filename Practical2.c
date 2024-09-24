// 2. Write a C program to find the factorial of a number using a loop.
// Objective: Learn loops and basic algorithm implementation.

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        factorial *= i;
    }

    printf("Factorial of %d = %llu\n", n, factorial);
    return 0;
}
