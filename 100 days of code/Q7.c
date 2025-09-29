//Q7: Write a program to swap two numbers without using a third variable.

#include<stdio.h>

int main()
{
    int a , b;
    printf("enter number one : ");
    scanf("%d", &a); // takes value of a
    printf("enter number two : ");
    scanf("%d", &b); //takes up value of b
    a = a ^ b;
    b = a ^ b; //these lines flip the values by using bitwise XOR
    a = a ^ b;
    printf("numbers after flipped are = %d and %d \n", a , b);
    return 0;
}
