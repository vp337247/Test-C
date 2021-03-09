#include<stdio.h>

int main(){
    int choice;
    printf("Enter a choice \n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1 :
        printf("biriyani");
        break;
    case 2 :
        printf("porotta");
        break;
    
    default:
        printf("fool");
        break;
    }

}