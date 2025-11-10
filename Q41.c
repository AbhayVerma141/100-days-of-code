//Write a program to swap the first and last digit of a number. //took help of chatgpt 
#include <stdio.h>

int main() 
{
    int num, temp, first, last, digits = 0, swapped, multiplier = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    last = num % 10;  // get last digit
                         // find first digit and multiplier (like 10^(digits-1))
    while (temp >= 10) {
        temp = temp / 10;      // keep dividing to get first digit
        multiplier = multiplier * 10;  // track place value
        digits++;
    }
    first = temp;  // first digit
                                    // remove first and last digits
    int middle = num % multiplier;  // remove first digit
    middle = middle / 10;           // remove last digit

    // construct new number: last + middle + first
    swapped = last * multiplier + middle * 10 + first; 
    printf("Number after swapping first and last digits: %d\n", swapped);
    return 0;
}
