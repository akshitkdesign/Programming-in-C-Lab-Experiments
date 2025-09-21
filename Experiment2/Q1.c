// #C_Lab
// Experiment 2 - Q1
// WAP a C program to calculate the area and perimeter of a rectangle

#include <stdio.h>

int main() {

    float length, width;
    
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter width of rectangle: ");
    scanf("%f", &width);
    
    float area = length * width;
    float perimeter = 2 * (length + width);
    
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}