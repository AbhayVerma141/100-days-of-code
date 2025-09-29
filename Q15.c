//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include<stdio.h>

int main()
{
    char x;
    printf("enter the character: ");
    scanf("%c", &x);
    if ( x >= 'A' && x <= 'Z' )
    {
        printf("the number is an uppercase alphabet \n");
    }
    else if ( x >= 'a' && x <= 'z' )
    {
        printf("the number is an lowercase alphabet\n");
    }
    else if ( x >= '0' && x <= '9' )
    {
        printf("the number entered is a digit \n");
    }
    else
    {
        printf("the character entered is a special character \n");
    }
    return 0 ;
}