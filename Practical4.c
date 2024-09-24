// 4. Write a C program to find the largest number in an array.
// Objective: Practice array manipulation and looping through elements.

#include <stdio.h>

int main() {
    int n, i, max;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Largest element = %d\n", max);
    return 0;
}
