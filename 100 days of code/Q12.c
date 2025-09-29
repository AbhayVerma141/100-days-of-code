//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>

int main()
{
    float x;
    printf("enter the number to check = ");
    scanf("%f", &x);
    if ( x >=0 )
    {
        if ( x == 0 )
        {
            printf("number is zero\n");
        }
        else
        {
            printf("number is positive\n");
        }
    }
    else
    {
        printf("number is negative\n");
    }
    return 0;

}
