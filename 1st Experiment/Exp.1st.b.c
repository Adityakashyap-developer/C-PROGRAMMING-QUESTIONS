/* Experiment: b) Write a program that reads a floating-point number and then displays the right-most
digit of the integral part of the number. */

#include <stdio.h>
int main()

{

    float x = 126.25;
    int y, z;
    y = (int)x;
    z = y % 10;

    printf("The right-most digit of the integral part of the number is: %d", z);
    
    return 0;
}