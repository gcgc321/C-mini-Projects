#include <stdio.h>

int main(void){

    int denominator;
    int numerator;
   

    printf("Enter a numerator:");
    scanf("%d", &numerator); 
    printf("Enter a denominator:");
    scanf("%d", &denominator);

    if (numerator % denominator == 0)
    {
        printf("There is not a remainder");
    }
    else 
    {
        printf("There is a remainder");
    }
    return 0;
}
