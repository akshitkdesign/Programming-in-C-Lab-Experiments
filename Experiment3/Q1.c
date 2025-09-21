// #C_Lab
// Experiment 3.1 - Q1
// WAP to check if the triangle is valid and determine its type

    #include <stdio.h>
    #include <math.h>
    int main() {
        int a, b, c;
        printf("Enter 3 sides of the triangle: ");
        scanf("%d %d %d", &a, &b, &c);

        if (a + b > c && a + c > b && b + c > a) {
            printf("Valid Triangle\n");

            if (a == b && b == c) 
                printf("Equilateral Triangle\n");
            else if (a == b || b == c || a == c) 
                printf("Isosceles Triangle\n");
            else 
                printf("Scalene Triangle\n");

            if ((a * a + b * b == c * c) || 
                (a * a + c * c == b * b) || 
                (b * b + c * c == a * a))
                printf("Right-Angle Triangle\n");
        } else {
            printf("Invalid Triangle\n");
        }
        return 0;
    }