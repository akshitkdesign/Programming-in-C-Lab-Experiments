// #C_Lab
// Experiment 2 - Q2
// WAP a C program to Convert temperature from Celsius to Fahrenheit

#include <stdio.h>

int main() {

    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    
    return 0;
}