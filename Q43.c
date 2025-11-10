//Write a program to check if a number is a strong number
#include<stdio.h>
int main()
{
    int num, temp , x , y , z, i, sum = 0;
    printf("enter the number you want to check = ");
    scanf("%d", &num);
    temp = num;
    while ( num != 0)
    {
        x = num % 10; //taking remainder 
        y = x;  // assigning the value
        z = 1; //resseting value of z 
        for ( i = 1; i <= y; i++ )
        {
            z = z * i;
        }
        sum = sum + z;
        num = num / 10; //dividing by 10
    }
    if( sum == temp )
    {
        printf("number is a strong number \n");
    }
    else
    {
        printf("number is not a strong number \n");
    }
    return 0;
}