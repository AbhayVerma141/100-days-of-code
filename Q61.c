//Search for an element in an array using linear search.
#include<stdio.h>
int main()
{
    int arr[10];
    int i, x , found;
    printf("enter the elements of the array: \n");
    for( i = 0 ; i < 10; i++) //loop to input elements in array
    {
        printf("enter the %d element of the list = ", i+1 );
        scanf("%d", &arr[i]);
    }
    printf("\nenter the element you want to search = ");
    scanf("%d", &x);
    for(i = 0; i < 10; i++)
    {
        if(arr[i] == x)
        {
            printf("found your element %d at position %d", x , i+1 );
        }
    }
    return 0;
}