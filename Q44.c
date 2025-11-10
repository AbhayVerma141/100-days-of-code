//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main()
{
    int n, i;
    float sum = 1, nume = 1, deno = 2;
    printf("Enter number of terms = ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (nume / deno);
        nume += 2;      // increase numerator by 2
        deno += 2;    // increase denominator by 2
    }
    printf("Sum of the series up to %d terms = %.2f\n", n, sum);
    return 0;
}
