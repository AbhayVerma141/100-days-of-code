//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() 
{
    int num1, num2, temp;
    printf("Enter two numbers = "); //taking input from the user
    scanf("%d %d", &num1, &num2);
    while (num2 != 0) // while is not equal to 0
    {
        temp = num2; //assigning num2 value to temp
        num2 = num1 % num2; //taking remainder of num1 and num2 and keeping it num2
        num1 = temp; //value of temp is in num1 now
    } //all process happening =  num2 value is taken to temp , then remainder is taken from num1 and num2, 
      //then the value of temp which was num2 is stored to num1 . process repeats
    printf("HCF (GCD) = %d\n", num1);
    return 0;
}
