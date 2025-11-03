//Q:Write a program to check if a number is prime.

#include<stdio.h>
int main()
{
    int num , rem , z , x;
    printf("enter the number you want to check = "); //taking the value of the number from user
    scanf("%d", &num);
    z = num / 2;
    x = num / 3;
    for (int i = 2; i = z; i++ )
    {
        printf("number is not prime\n");
    
        for ( int j = 2; j = x; j++ )
        {
            printf("number is not prime \n");
        }
    }
    if ( z != 1 )
    {
        printf ("number is prime");
    }
}