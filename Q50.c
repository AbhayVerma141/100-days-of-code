//Write a program to print the following pattern:
//*****
// ****
//  ***
//   **
//    *
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 5; i >= 1; i--) // rows
    {
        for (j = 5; j > i; j--) // spaces
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++) // stars
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
