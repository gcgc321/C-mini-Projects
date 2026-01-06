#include <stdio.h>
#include <stdbool.h>

int main(void){

    int number;

    printf("Enter a number between 1 and 500: ");
    scanf("%d", &number);


    if(number >= 1 && number <= 100)
    {
    printf("Your number is between 1 and 100");
    }
    else if(number >= 101 && number <= 200)
    {
    printf("Your number is between 101 and 200");
    }
    else if(number >= 201 && number <= 300)
    {
    printf("Your number is between 201 and 300");
    }
    else if(number >= 301 && number <= 400)
    {
    printf("Your number is between 301 and 400");
    }
    else if (number >= 401 && number <= 500)
    {
    printf("Your number is between 401 and 500");
    }
    else 
    {
    printf("Your number is not between 1 and 500");
    }

    return 0;
}