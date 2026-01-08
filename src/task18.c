#include <stdio.h>
#include <stdlib.h>

struct Member
{
    int member_a;
    float member_b;
    char member_c;
};


int main(void)
{
    struct Member s1;

    s1.member_a = 4;
    s1.member_b = 3.14;
    s1.member_c = 'b';

    printf("This is my struct int: %d\n", s1.member_a);
    printf("This is my struct float: %.2f\n", s1.member_b);
    printf("This is my struct char: %c\n", s1.member_c);
    

    return 0;
}