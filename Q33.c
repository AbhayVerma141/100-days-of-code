//Q:Write a program to check if a number is an Armstrong number.
#include<stdio.h>
int main()
{
    int num , temp, cube = 0 , z;
    printf("enter the number you want to check = "); //taking the value of the number from user
    scanf("%d", &num);
    temp = num; //assigning the value taken from user to another variable
    while ( num > 0)
    {
        z = num % 10;
        cube = cube + (z * z * z); //taking cube and adding it
        num = num / 10;
    }
    if ( cube == temp)
    {
        printf("the number is armstrong \n");
    }
    else
    {
        printf("the number is not armstrong \n");
    }
}