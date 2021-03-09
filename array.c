#include <stdio.h>

int main()
{
    int arr[100];
    int i;
    int limit;
    printf("Enter array Limit\n");
    scanf("%d", &limit);
    printf("Please Enter Values\n ");
    for (i = 0; i < limit; i++) // No need of i<arr[5]
    {
        scanf("%d", &arr[i]);
    }
    printf("Entered Values are : ");
    for (i = 0; i < limit; i++)
    {
        printf("%d\t", arr[i]);
    }
}