#include <stdio.h>

int main()
{
    int i;
    int j;
    int num;
    printf("Enter a limit ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = num; j >= i; j--) //this loop re-initialising after each
        {
            printf(" * ");
        }
        printf("\n");
    }
}