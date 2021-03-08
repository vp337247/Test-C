#include<stdio.h>

int main(){
    int P;
    float R;
    float N;
    float SI;
    printf("Enter P R N \n");
    scanf("%d%f%f",&P,&R,&N);
    SI=P*R*N/100;
    printf("Simple Interest : %f",SI);
}