#include <stdio.h>
#include <stdlib.h>

int main(){

    char *ptr = (char *)malloc(10*sizeof(char));

    if (ptr == NULL)
    {
        printf("Allocation Failed");
        return 1;
    }
    else
    {
        printf("Allocation Success");
        free(ptr);
        return 0;
    }
}