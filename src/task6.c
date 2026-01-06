#include <stdio.h>
#include <math.h>

int main(void){

    float a,b,c,x_plus, x_minus;

    printf("Enter a value for A: ");
    scanf("%f", &a);

    printf("Enter a value for B: ");
    scanf("%f", &b);

    printf("Enter a value for C: ");
    scanf("%f", &c);

    x_plus = (-(b) + sqrtf((powf(b,2))-4*a*c))/(2*a);
    x_minus = (-(b) - sqrtf((powf(b,2))-4*a*c))/(2*a);

    printf("The + value for x is %f\n", x_plus);
    printf("The - value for x is %f\n", x_minus);


    return 0;
}