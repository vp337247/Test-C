#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int res;
    printf("Enter Two Numbers ");
    scanf("%d%d", &num1, &num2);
    //printf("You Have Entered %d %d",num1,num2 );
    res = num1 + num2;
    printf(" Result is : %d ", res);
    return 0;
}
