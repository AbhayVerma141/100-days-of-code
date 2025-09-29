//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>

int main()
{
    int x;
    printf("enter the year = ");
    scanf("%d", &x);
    if ( x % 400 == 0 )  //if the year is divisible by 400 it's leap year
    {
        printf("its a leap year \n");
    }
    else if ( x % 100 == 0 ) //if the year is divisible by 100 it's not a leap year
    {
        printf("it's not a leap year \n");
    }
    else if ( x % 4 == 0) //if the year is divisible by 4 it's leap year
    {
        printf("its a leap year \n");
    }
    else
    {
        printf ("not a leap year \n");
    }
    return 0;
}
