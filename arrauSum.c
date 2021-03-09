#include <stdio.h>

int main()
{
    int i;
    int arr[100];
    int limit;
    int sum = 0;

    printf("Enter array limit\n");

    scanf("%d", &limit);

    printf("Enter array values\n");


    for (i = 0; i < limit; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("sum is : %d",sum);
}