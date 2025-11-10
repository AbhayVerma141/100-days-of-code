//Write a program to check if a number is a perfect number.
#include<stdio.h>
int main()
{
    int num , temp , x , i , y, z;
    printf("enter the number you want to check = ");
    scanf("%d", &num); //taking input from the user
    temp = num;
    for (i = 1; i < num; i++)
    {
        x = num % i;
        if ( x == 0 ) //checking if the remainder is 0
        {
            y = i;
            z = z + y; //if the remainder is 0 the numbers are added
        }
    }
    if ( z == temp )
    {
        printf("the number is perfect \n");
    }
    else
    {
        printf("the number is not perfect");
    }
    return 0;
}