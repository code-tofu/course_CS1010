/*
Lecture 2 Example 1:
Convert the Circle Algorithm to Code
Calculate the area and circumference of a circle given a radius
use PI as 3.14158
*/

#include <stdio.h>
#define PI 3.14159

int main() {
    
    double radius = 0, area = 0, circum = 0;
    
    printf("Enter the radius of the circle:");
    scanf("%lf", &radius);
    
    area = radius * radius * PI;
    circum = 2 * PI * radius;
    
    printf("A circle of radius %lf has area %lf and circumference %lf",radius, area, circum);
    
    return 0;
}
