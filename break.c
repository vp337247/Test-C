#include<stdio.h>

int main(){
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("Hi \n");
        if (i==5)
        {
            break;
        }
        printf("Hello\n");
        
    }
    printf("Finished");
}