#include <stdio.h>

int main(void){

    int x = 10;
    int *ptrX = &x;


    // For this exercise it wants to show how not dereferencing assigns memory address to pointer
    printf("The ptr not using * is the memory adress at: %d\n", ptrX);
    printf("The ptr dereferenced value is: %d\n", *ptrX);

    return 0;
}
