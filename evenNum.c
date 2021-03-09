#include <stdio.h>

int main()
{
    int num;
    int i;

    printf("Enter a Number \n");
    scanf("%d", &num);
    printf("Even numbers are : ");
    for (i = 2; i <= num; i++)
    {
        if (i % 2 == 0)

        {
            printf(" %d", i);
        }
    }
}