#include <stdio.h>

int main()
{
    float mark;
    printf("Enter Your Mark \n");
    scanf("%f", &mark);
    if (mark < 50)
    {
        printf("You Are Failed");
    }
    else if (mark == 50)
    {
        printf("Just Pass");
    }
    else
    {
        printf("Passed");
    }
}