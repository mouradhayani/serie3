#include<stdio.h>
void main()
{
    int Nbpers,Nbpl;
    char entr;
    printf("Enter how many person on the queue : ");
    scanf("%d",&Nbpers);
    printf("Enter how many place is available : ");
    scanf("%d",&Nbpl);
   while(Nbpers>0&&Nbpl>0)
   {
       Nbpers--;
       Nbpl--;
       printf("number of person: %d number of place available : %d\n",Nbpers,Nbpl);
    
        
    }
    if(Nbpl==0)
    printf("the cinema room is full !!");
    else
    printf("there is no more people !!");
}