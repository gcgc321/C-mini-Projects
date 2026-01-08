#include <stdio.h>

struct Employee_first
{
    char last_name[20];
    char first_name[20];
    int employee_id;
    int ssn_last_four;
    char title[20];
};

struct Employee_second
{
    struct Employee_first employee_A;
};

int main()
{
    struct Employee_second A;
    struct Employee_second B;


    //employee A input
    printf("Enter the employee's first name:\n");
    scanf("%s", A.employee_A.first_name);
    printf("Enter the employee's last name: \n");
    scanf("%s", A.employee_A.last_name);
    printf("Enter the employee's ID number:\n");
    scanf("%d", &A.employee_A.employee_id);
    printf("Enter the last four digits of the employee's SSN:\n");
    scanf("%d", &A.employee_A.ssn_last_four);
    printf("Enter the employee's job title (do not include the word 'Engineer'):\n");
    scanf("%s", A.employee_A.title);

    // employee b input
    printf("Enter the employee's first name:\n");
    scanf("%s", B.employee_A.first_name);
    printf("Enter the employee's last name: \n");
    scanf("%s", B.employee_A.last_name);
    printf("Enter the employee's ID number:\n");
    scanf("%d", &B.employee_A.employee_id);
    printf("Enter the last four digits of the employee's SSN:\n");
    scanf("%d", &B.employee_A.ssn_last_four);
    printf("Enter the employee's job title (do not include the word 'Engineer'):\n");
    scanf("%s", B.employee_A.title);

    //employee A info
    printf("Employee information for %s %s:\n", A.employee_A.first_name, A.employee_A.last_name); 
    printf("ID: %d\n", A.employee_A.employee_id); 
    printf("SSN: %d\n", A.employee_A.ssn_last_four);
    printf("Title: %s Engineer\n", A.employee_A.title); 

    //employee B info
     printf("Employee information for %s %s:\n", B.employee_A.first_name, B.employee_A.last_name); 
    printf("ID: %d\n", B.employee_A.employee_id); 
    printf("SSN: %d\n", B.employee_A.ssn_last_four);
    printf("Title: %s Engineer\n", B.employee_A.title); 
    return 0;
}


