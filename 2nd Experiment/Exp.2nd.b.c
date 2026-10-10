/* EXPERIMENT 2(b): WAP to find whether a year is leap or not. */

#include <stdio.h>
int main()

{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

    return 0;
}



// for code run we use ( setp 1st - gcc filename.c -o filename.exe ) and ( step 2nd - ./filename.exe )