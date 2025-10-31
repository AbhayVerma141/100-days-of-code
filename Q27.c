//Q:Write a program to print the sum of the first n odd numbers.

#include<stdio.h>

int main()
{
    int x, n;
    int y = 1, sum = 0;
    printf("enter the amount of numbers you want = ");
    scanf("%d", &n);
    for ( x = 0; x < n; x++)
    {
        sum = sum + y;
        y = y+2;
    }
    printf ("the sum of the first %d odd numbers is %d \n", n, sum);
    return 0;
}
