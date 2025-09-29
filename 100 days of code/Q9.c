//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>

int main()
{
    float p , r , t;
    printf("enter the principal amount = ");
    scanf("%f", &p); //takes up values of principal amount
    printf("enter the rate = ");
    scanf("%f", &r); //takes up values of rate
    printf("enter the time = ");
    scanf("%f", &t); //takes up values of time
    printf("simple interest is = %f\n", (p * r * t) / 100 ); //calculate simple interest by the formula
    printf("compound interest is = %f\n", p * (pow((1 + r / 100), t)) - p); // calculates compound interest by the formula
    return 0 ;
}