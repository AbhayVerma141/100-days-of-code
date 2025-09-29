//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>

int main()
{
    float c; //float value to store temp in celsius
    printf("enter your temp in celsius");
    scanf("%f", &c);  //takes up the value of temp in celsius from the user
    printf("the temp in fehrenheit will be = %f\n", (c * 9 / 5) + 32);
}
