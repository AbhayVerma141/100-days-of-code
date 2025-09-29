//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else

#include<stdio.h>

int main()
{
    char x;
    printf("enter your character = ");
    scanf("%c", &x);
    if ( x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' ||x == 'E' || x == 'I' || x == 'O' || x == 'U' )
    {
        printf("the character is vowel \n");
    }

    else
    {
        printf("the character is consonant \n");
    }
    return 0;

}
