//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>

int main()
{
    int s, h, m , se;
    printf("enter your time in seconds");
    scanf("%d", &s);
    h =  s / 3600; //gets the hours
    m = (s % 3600) / 60; //gets the mins
    se = h % 60; //gets the seconds
    printf("hours:minutes:seconds are = %d:%d:%d\n", h,m,se);
    return 0;
}
