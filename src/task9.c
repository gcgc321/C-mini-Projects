#include <stdio.h>

int main (){
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    

    printf("The size of the array is %d\n", sizeof(array)/sizeof(array[0]));
    return 0;
}