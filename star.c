/* first loop for row 
 second loop for how many stars  */

#include <stdio.h>

int main()
{
    int i;
    int j;
    int num;
    printf("Enter a limit ");
    scanf("%d", &num);
    for (i = 1; i < num; i++)
    {
        for (j = 0; j < i; j++) //this loop re-initialising after each
        {
            printf(" * ");
        }
        printf("\n");
    }
}