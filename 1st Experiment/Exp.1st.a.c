/* Experiment: a) Given the values of the variables x, y and z, write a program to rotate their values such
that x has the value of y, y has the value of z, and z has the value of x */

#include <stdio.h>
int main()

{
    int x = 10, y = 20, z = 30, temp;
    printf("The value of x,y,z before rotation x = %d \t y = %d \t z = %d \n", x, y, z);

    temp = x;
    x = y;
    y = z;
    z = temp;

    printf("The value of x,y,z after rotation x = %d \t y = %d \t z = %d \n", x, y, z);

    return 0;
}
