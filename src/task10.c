#include <stdio.h>
#include <math.h>

int main(void) {
    float avg, sum;
    int i, numbers[10];

      
    for (i = 0; i < 8; i++)
    {

        printf("Enter a test score: ");
        scanf("%d", &numbers[i]);
        sum = sum + numbers[i];
    }

    avg = sum/(sizeof(numbers)/(sizeof(numbers[0])));

    printf("Your average score is %.2f\n", avg);

    return 0;
}