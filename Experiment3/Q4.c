// #C_Lab
// Experiment 3 - Q4
// According to the Gregorian calendar, 01/01/01 was Monday.
// Find the day on 1st January of any input year

#include <stdio.h>

int main() {

    int year;
    
    printf("Enter a year: ");
    scanf("%d", &year);
    
    int day = (year + (year-1)/4 - (year-1)/100 + (year-1)/400) % 7;
    // 0 = Sunday, 1 = Monday, ..., 6 = Saturday

    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    printf("1st January %d is a %s\n", year, days[day]);
    
    return 0;
}