//Write a program to print the following pattern
//*****
//*****
//*****
//*****
//*****
#include<stdio.h>
int main()
{
    int i , j;
    for ( i = 0; i < 5 ; i++) //rows
    {
        for ( j = 0; j < 5 ; j++) //collumns
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}