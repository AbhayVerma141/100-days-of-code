//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main()
{
    int n, i;
    float sum = 0, nume = 2, deno = 3;
    printf("Enter number of terms = ");
    scanf("%d", &n); //taking the value from user till how much you want to print
    for (i = 1; i <= n; i++)
    {
        sum = sum + (nume / deno); //adding the value to sum 
        nume = nume + 2; //increasing the next numerator by 2 according to the pattern
        deno = deno + 4; //increasing the next denomerator by 4 according to the pattern
    }
    printf("The sum of the series up to %d terms = %.2f\n", n, sum);
    return 0;
}
