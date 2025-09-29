//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>

int main()
{
    float r;
    float pi = 3.14;
    printf("enter the radius of the circle: ");
    scanf("%f", &r);
    printf("the area of the circle is = %f \n", pi * r * r);
    printf("the circumference of the circle is = %f\n", 2 * pi * r);
    return 0;
}