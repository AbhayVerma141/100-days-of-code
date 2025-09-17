//Q8: Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>

int main()
{
    int n;
    printf("enter the amount of numbers you want sum of ");
    scanf("%d", &n);
    printf("the sum of the n numbers is = %d \n", n *(n+1) / 2); // formula for finding sum for n numbers
    return 0;
}
