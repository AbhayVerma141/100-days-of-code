//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include<stdio.h>

int main()
{
    int x;
    printf("enter the number = ");
    scanf("%d", &x);
    if ( x % 2 == 0) //if condition
    {
        printf(" number entered is even \n");
    }
    else
    {
        printf("number entered is odd \n");
    }
    return 0;
}