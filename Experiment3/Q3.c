// #C_Lab
// Experiment 3 - Q3
// WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear

#include <stdio.h>

int main() {
    
    float x1, y1, x2, y2, x3, y3;
    
    printf("Enter x1 y1: ");
    scanf("%f %f", &x1, &y1);
    printf("Enter x2 y2: ");
    scanf("%f %f", &x2, &y2);
    printf("Enter x3 y3: ");
    scanf("%f %f", &x3, &y3);
    
    // Using area of triangle formula: if area = 0, points are collinear
    float area = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);
    
    if (area == 0)
        printf("Points are collinear\n");
    else
        printf("Points are not collinear\n");
        
    return 0;
}