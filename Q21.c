//Q:Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>
int main()
{
    int number , days;
    printf("enter the number of the month b/w 1 - 12 = ");
    scanf("%d", &number );
    switch(number)
    {
        case 1:
            printf ("the month is january \n number of days = 31 ");
            break;
        case 2:
            printf (" the month is february \n the number of days = 28 or 29 ");
            break;
        case 3:
            printf ("the month is march \n number of days = 31 ");
            break;
        case 4:
            printf ("the month is April \n number of days = 30 ");
            break;
        case 5:
            printf ("the month is May \n number of days = 31 ");
            break;
        case 6:
            printf ("the month is june \n number of days = 30 ");
            break;
        case 7:
            printf ("the month is july \n number of days = 31 ");
            break;
        case 8:
            printf ("the month is August \n number of days = 31 ");
            break;
        case 9:
            printf ("the month is September \n number of days = 30 ");
            break;
        case 10:
            printf ("the month is October \n number of days = 31 ");
            break;
        case 11:
            printf ("the month is November \n number of days = 30 ");
            break;
        case 12:
            printf ("the month is December \n number of days = 31 ");
            break;
    }
return 0;
}
