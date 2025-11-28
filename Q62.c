//Reverse an array without taking extra space.
#include<stdio.h>
#include <stdio.h>

int main()
{
    int n, i, temp;
    printf("Enter number of elements = ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }