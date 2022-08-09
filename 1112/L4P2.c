#include <stdio.h>
float circlearea(float radius);

int main(){
    
    float area = 0, R1 = 0, R2 = 0, R3 = 0, R4 = 0;
    printf("Input the largest circle radius:");
    scanf("%f",&R1);
    printf("\n Input the radii of the three smaller circles:");
    scanf("%f %f %f",&R2,&R3,&R4);
    printf("%f %f %f %f",R1,R2,R3,R4);
    area = circlearea(R1) - circlearea(R2) - circlearea(R3) - circlearea(R4);
    printf("The area of the shaded area is %lf", area);
}

float circlearea(float radius){
    float area = 0;
    area = radius * radius * 3.14159;
    return area;
}

/*
note the different format specifiers %f for flot and %lf for double
*/