//Q:Write a program to check if a number is a palindrome.

#include<stdio.h>
int main()
{
    int num, x , pal = 0, temp; //taking variables
    printf("enter the number you want pallindrome of = ");
    scanf("%d", &num); //assigning values
    temp = num; //assigning the input value to another variable for further use
    while ( num > 0)
    {
        x = num % 10; //taking remainder
        pal = (pal * 10) + x;  
        num = num / 10;
    }
    if ( pal == temp) //applying condition to check pallindrome
    {
        printf("the number entered is pallindrome");
    }
    else
    {
        printf("the number is not pallindrome");
    }
    return 0;
}