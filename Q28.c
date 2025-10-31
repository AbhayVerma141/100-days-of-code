//Q:Write a program to print the product of even numbers from 1 to n.

#include<stdio.h>

int main()
{
    int x, n;
    int y = 2 , pro = 1;
    printf("enter the amount of even numbers you want = ");
    scanf("%d", &n);
    for (x = 0; x < n; x++)
    {
        pro = pro * y;
        y = y+2;
    }
    printf("the product of the first %d even numbers is %d \n", n, pro );
    return 0;
}

