//Q:Write a program to reverse a given number

#include<stdio.h>
int main()
{
    int x , y = 0 , z , temp;
    printf("enter the number you want to reverse = ");
    scanf("%d", &x);
    temp = x;
    while (x > 0)
    {
        z = x % 10;
        y = (y * 10) + z;
        x = x / 10;
    }
    printf("the number %d reversed is %d", temp , y);
    return 0;
}