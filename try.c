#include<stdio.h>

int main(void)
{
    int i;
    do
    {
        printf("enter number to meow");
        scanf("%d", &i);
    }
    while(i < 1);

    for (; i > 0; i--)
    {
        printf("meow\n");
    }
    return 0;
}