#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int myst,num;
    srand(time(NULL));
    myst=rand()%51;
    while(myst!=num){
        printf("\nEnter a number : ");
        scanf("%d",&num);
        if(num<myst)
            printf("the mystery number is greater");
        else if(num>myst)
            printf("the mystery number is smaller");
 }
    printf("congratulation!! you got it \n");
    printf("the mystery number : %d",myst);
    
    
}