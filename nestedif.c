#include <stdio.h>

int main()
{
    int choice;
    int num1;
    int num2;
    int sum;
    int sub;
    int mul;
    int div;

    printf("Enter Two Numbers \n");

    scanf("%d%d", &num1, &num2);

    printf("Enter a Choice \n");

    scanf("%d",&choice);

    if (choice == 1)
    {
        sum = num1 + num2;
        printf("Sum : %d ", sum);
    }
    else if (choice == 2)
    {
        sub = num1 - num2;
        printf("Sub : %d ", sub);
    }
    else if (choice == 3)
    {
        mul = num1 * num2;
        printf("Mul : %d ", mul);
    }
    else if (choice == 4)
    {
        div = num1 / num2;
        printf("Div : %d ", div);
    }
    else
    {
        printf("You Are a Fool");
    }
}