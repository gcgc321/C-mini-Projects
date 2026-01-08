#include <stdio.h>

struct variable
{
    int integer;
};


int main(void)
{
    struct variable *ptr;
    struct variable test;

    ptr = &test;

    test.integer = 5;
    int x = test.integer;

    (*ptr).integer = 6;
    int y = (*ptr).integer;

    ptr->integer = 7;
    int z = ptr->integer;

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    return 0;
}