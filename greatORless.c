#include <stdio.h>

int main()
{
    int num1;
    int num2;
    printf("Enter Two numbers \n");
    scanf("%d%d", &num1, &num2);
    if (num1 > num2)
    {
        printf("Large number is %d", num1);
    }
    else if (num1 == num2)
    {
        printf("Both are Equal");
    }
    else
    {
        printf("Large number is %d", num2);
    }
}