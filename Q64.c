//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main()
{
    long long num;
    int count[10];
    int d, i, max = 0, result = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if(num < 0)
        num = -num; //making negative number positive

    while(num > 0)
    {
        d = num % 10; 
        count[d]++;    //took logic from chatgpt
        num = num / 10;
    }
    for(i = 0; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            result = i;
        }
    }
    printf("Digit occurring most times = %d\n", result);
    printf("Number of times = %d\n", max);
    return 0;
}
