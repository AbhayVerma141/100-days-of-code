//Q: Write a program to find the roots of a quadratic equation and categorize them.

#include<stdio.h>
#include<math.h>

int main()
{
    float a , b , c , d;
    printf (" enter the quadratic equation numbers : ");
    scanf("%f %f %f", &a, &b, &c);
    d = b * b - 4 * a * c; //finding the discriminant
    if ( a == 0 ) //if the value is 0 there is no qudratic equation
    {
        printf(" the values are incorrect there is no quadratic equation hence no roots \n" );
    }
    else if ( d == 0 ) //if discriminant  is 0 there is real and same root
    {
        printf (" the roots are real and same \n"); //if de
        printf ("The root is %.2f \n", (-b + sqrt(d)) / (2 * a));
    }
    else if ( d > 0 ) //if discriminant  is greater than 0 the roots are real and different
    {
        printf(" the roots are real and different \n ");
        printf(" the first root is %.2f \n", (-b + sqrt(d)) / (2 * a));
        printf(" the second root is %.2f \n", (-b - sqrt(d)) / (2 * a));
    }
    else
    {
        printf (" the roots are complex \n");
    }
    return 0;
}
