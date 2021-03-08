#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number \n");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("It's a Positive Number");
    }
    else if (a == 0)
    {
        printf("It's Zero");
    }
    else
    {
        printf("It's a Negative number");
    }
}