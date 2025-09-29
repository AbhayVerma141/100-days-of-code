//Q:Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
//90-100: Grade A
//80-89: Grade B
//70-79: Grade C
//60-69: Grade D
//below 60: Grade F.

#include<stdio.h>

int main()
{
    float x;
    printf("enter your percentage = ");
    scanf("%f", &x);
    if ( x <= 100 && x >= 90 )
    {
        printf (" congratulations you have got GRADE A \n" );
    }
    else if ( x <= 89 && x >= 80 )
    {
        printf(" good work you have got GRADE B \n");
    }
    else if (x <= 79 && x >= 70 )
    {
        printf(" you have got GRADE C \n");
    }
    else if (x <= 69 && x >= 60 )
    {
        printf(" you have got grade D \n");
    }
    else
    {
        printf (" you have got grade F \n");
    }
    return 0;
}
