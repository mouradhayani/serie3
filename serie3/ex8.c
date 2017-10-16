#include<stdio.h>
void main()
{
    
    float S=0,N,i;
    printf("Enter a number : ");
    scanf("%f",&N);
    for(i=1;i<=N;i++){
        S+=1/i;
    }
    printf("\nS=%f ",S);
}