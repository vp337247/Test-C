#include<stdio.h>

int main(){
    int num;
    int i;
    int sum=0;
    printf("Enter a Number ");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        sum=sum+i;
        
    }
    printf(" sum : %d ",sum);
    
    
}