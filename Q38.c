//Write a program to find the sum of digits of a number.
#include<stdio.h>
int main()
{
    int num, temp , x , y = 0 ;
    printf("enter the number = ");
    scanf("%d", &num);  //taking input from user
    temp = num;
    while ( num != 0)
    {
        x = num % 10; //taking remainder 
        y = y + x; // adding the value 
        num = num / 10; //dividing by 10
    }
    printf(" the sum of the digits of the number %d is = %d \n", temp, y);
    return 0;
}