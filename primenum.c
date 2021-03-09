#include <stdio.h>

int main()
{
    int num;
    int i;
    int flag = 0;

    printf("Enter a Number ");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("The Number is Prime  ");
    }
    else
    {
        printf("Not Prime");
    }
}