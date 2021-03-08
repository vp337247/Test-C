#include <stdio.h>

int main()
{
    float num1;
    float num2;
    float num3;
    float sum;
    float avg;
    printf("Enter 3 numbers ");
    scanf("%f%f%f", &num1, &num2, &num3);
    sum = num1 + num2 + num3;
    avg = sum / 3;
    printf("Average is : %f", avg);
}