//Find the sum of array elements.
#include <stdio.h>

int main() 
{
    int arr[50];
    int n, i, sum = 0;
    printf("Enter number of elements = ");
    scanf("%d", &n);
    printf("Enter %d elements = \n", n);
    for (i = 0; i < n; i++) 
    {
        printf("enter the %d element of the array = ", i);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];   // add each element to sum
    }
    printf("Sum of array elements = %d\n", sum);
    return 0;
}
