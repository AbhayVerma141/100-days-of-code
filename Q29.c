//Q:Write a program to calculate the factorial of a number.

#include<stdio.h>
int main()
{
    int num, fact = 1;
    printf("enter the number you want the factorial of = ");
    scanf("%d", &num);
    for (int i = 1; i <= num ; i++)
    {
        fact = fact * i;
    }
    printf("the factorail of the number %d is %d", num , fact );
    return 0;
}