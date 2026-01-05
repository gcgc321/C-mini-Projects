#include <stdio.h>

int main(void){
    char first_name[15]; 
    char last_name[15];


    printf("Enter your first name:\n");
    scanf("%s", &first_name);
    printf("Enter your last name:\n");
    scanf("%s",&last_name);

    printf("Hello %s %s!\n", first_name, last_name);
}