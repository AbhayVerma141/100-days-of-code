#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the sides of the triangle = ");
    scanf("%d %d %d", &a, &b, &c);

    // Check validity of triangle
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("The triangle is valid.\n");

        // Check type
        if (a == b && b == c)
        {
            printf("The triangle is Equilateral.\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("The triangle is Isosceles.\n");
        }
        else
        {
            printf("The triangle is Scalene.\n");
        }
    }
    else
    {
        printf("The triangle is NOT valid.\n");
    }

    return 0;
}