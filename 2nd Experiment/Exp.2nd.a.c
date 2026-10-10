/* Experiment 2: a) Program to find largest and smallest number from four given numbers. */

#include <stdio.h>
int main()
{

    int a, b, c, d, largest, smallest;

    printf("Enter your Numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    largest = a;
    smallest = a;

    //  find the lasgest number

    if (b >= largest)
        largest = b;
    if (c >= largest)
        largest = c;
    if (d >= largest)
        largest = d;

    //  find the smallest number

    if (b <= smallest)
        smallest = b;
    if (c <= smallest)
        smallest = c;
    if (d <= smallest)
        smallest = d;

    printf("Largest number is : %d\n", largest);
    printf("Smallest number is : %d\n", smallest);

    return 0;
}


// for code run we use ( setp 1st - gcc filename.c -o leap.exe ) and ( step 2nd - ./leap.exe )