#include <stdio.h>
#define PI 3.14159265359


int main(){

    float radius;
    float area;

    printf("Input a radius of a circle:\n");
    scanf("%f", &radius);

    area = radius*radius*PI;

    printf("The area is: %.1f\n", area);

    return 0;
}