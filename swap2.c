#include <stdio.h>

int main()
{
    int a = 45;
    int b = 12;
    a = a + b;
    b = a - b;
    a = a - b;
    printf(" a : %d , b : %d ", a, b);
}