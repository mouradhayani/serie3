#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int num[10],w=0,i;
    srand(time(NULL));
    for(i=0;i<10;i++){
        num[i]=rand()%7+1;
        printf("the dice shows : %d\n",num[i]);
        if(num[i]==6)
            w++;    
    }
    printf("the dice shown the number 6 : %d times\n",w);
    if(w<2)
        printf("sorry, you didn't make it try again later");
    else
        printf("We got a winner !!");
    
    
}