//  Name: pun.c
//  Purpose: prints a bad pun
//  Author: Med Fahmy
//  Date: Mon 13/12/2021

#include <stdio.h>

#define THING 166
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)


float fahrenheit_to_celsius(float f) {
    float c = (f - FREEZING_PT) * SCALE_FACTOR;
    return c;
}

int main(void) {
    // printf("to c or not to c, that is the question\n");

    // int height;
    // float pi;
    // height = 9;
    // pi = 3.14;

    // printf(" %d, %.2f \n", height, pi);

    // float i;
    // printf("enter an integer: ");
    // scanf("%f", &i);
    // printf("i is %f\n", i);
    
    printf("%.1f\n", fahrenheit_to_celsius(212.0));
    return 0;
}
