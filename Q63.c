//Merge two arrays.
#include<stdio.h>
int main()
{
    int arr[10];
    int abc[10];
    int comb[20];
    printf("enter the element in the first array: \n");
    for (int i = 0 ; i < 10; i++)
    {
        printf("enter the %d element of the array = ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("enter the element in the second array: \n");
    for (int i = 0 ; i < 10; i++)
    {
        printf("enter the %d element of the array = ", i+1);
        scanf("%d", &abc[i]);
    }
    for (int i = 0 ; i < 10; i++)
    {
        comb[i] = arr[i]; //puting values in the joint array
    }
    for (int i = 0 ; i < 10; i++)
    {
        comb [i + 10] = abc[i]; //putting values in the joint array of second array
    }
    for (int i = 0 ; i < 20; i++)
    {
    printf("combined array element %d = %d \n", i+1 , comb[i]);
    }
    return 0;
}