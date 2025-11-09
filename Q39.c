//Write a program to find the product of odd digits of a number.
#include<stdio.h>
int main()
{
    int num, temp , x , y = 1, z ;
    printf("enter the number = ");
    scanf("%d", &num);  //taking input from user
    temp = num;
    while ( num != 0)
    {
        x = num % 10; //taking remainder 
        z = x % 2; 
        if ( z != 0 ) //checking if number is odd
        {
            y = y * x; // multiplying the value
        }
        num = num / 10; //dividing by 10
    }
    printf(" the sum of the digits of the number %d is = %d \n", temp, y);
    return 0;
}