// #C_Lab
// Experiment 1 - Q4
// Write a C program to add two numbers, take number from user

#include <stdio.h>

int main() {
    
    int num1, num2, sum;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    sum = num1 + num2;

    printf("Sum = %d\n", sum);
    return 0;
}
