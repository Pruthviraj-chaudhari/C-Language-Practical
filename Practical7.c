// 7. Write a C program to create and display information about students using structures.
// Objective: Learn how to define and use structures for data handling.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    
    printf("Enter name: ");
    scanf("%s", s.name);
    
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    
    printf("\nStudent Information:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
    
    return 0;
}
