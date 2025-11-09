//Write a program to print all factors of a given number.
#include <stdio.h>

int main() 
{
    int num, i;
    printf("Enter a number = ");
    scanf("%d", &num); //taking input from the user
    printf("Factors of %d are = ", num); //writing this before so that output is in proper format
    for (i = 1; i <= num; i++) 
    {
        if (num % i == 0) //checking if remainder is 0 
        {
            printf("%d ", i);
        }
    }   
    return 0;
}
