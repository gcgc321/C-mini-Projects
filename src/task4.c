#include <stdio.h>

int main(void){

    float seconds_input;

    float seconds_output;
    float minutes_ouput;
    float hours_ouput;

    printf("enter the amount of seconds:\n");
    scanf("%f", &seconds_input);


    hours_ouput = (int)(seconds_input/3600);
    minutes_ouput = (int)(((seconds_input/60) - hours_ouput*60));
    seconds_output = (int)(seconds_input - (hours_ouput*3600) - (minutes_ouput*60));

    printf("%0.0f seconds is equal to %0.0f hours %0.0f minutes %0.0f seconds\n", seconds_input, hours_ouput, minutes_ouput, seconds_output);

    return 0;
}