#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int myst,num;
    srand(time(NULL));
    myst=rand()%11;
    while(myst!=num){
        printf("\nEnter a number : ");
        scanf("%d",&num);
        printf("WRONG !");
 }
    printf("congratulation!! you got it \n");
    printf("the mystery number : %d",myst);
    
    
}