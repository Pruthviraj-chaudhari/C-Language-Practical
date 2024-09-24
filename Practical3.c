// 3. Write a C program to print the Fibonacci sequence using recursion.
// Objective: Understand recursion and function calling.

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci sequence: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    
    return 0;
}
