#include<stdio.h>

int main()
{
    int x , y , z;
    printf (" enter the 3 numbers =  ");
    scanf("%d %d %d", &x, &y, &z);
    if (x > y && x > z)
    {
        printf("%d is the biggest among the 3 numbers \n", x);
    }
    else if ( y > x && y > z)
    {
        printf("%d is the biggest among the 3 numbers \n", y);
    }
    else if ( z > x && z > y)
    {
        printf("%d is the biggest among the 3 numbers \n", z);
    }
    else
    {
        printf("all numbers are same \n");
    }
    return 0;
}
