//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>

int main()
{
    int x, y;
    printf("enter both of the number= ");
    scanf("%d%d", &x, &y);
    printf("sum of the numbers= %d\n", x + y);
    printf("difference between the numbers = %d\n", x - y);
    printf("product of the numbers = %d\n ", x * y);
    printf("quotient of the numbers = %d\n", x / y);
    return 0;
}
