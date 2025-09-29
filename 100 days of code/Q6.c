//Q6: Write a program to swap two numbers using a third variable.

#include<stdio.h>

int main()
{
    int a , b , c; // takes up integer values
    printf("enter number one : ");
    scanf("%d", &a); // takes value of a
    printf("enter number two : ");
    scanf("%d", &b); //takes up value of b
    c = a;
    a = b;  // these 3 lines are flipping the values 
    b = c;
    printf ("flipped values are = %d %d\n", a , b);
    return 0;
}