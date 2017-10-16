#include<stdio.h>
#include<math.h>
void main()
{
    float avrg;
    int num[100],max=0,i=0,min,sum=0;
    min=(pow(2,16)-1);
    
       
    while(num[i]!=0){ 
            i++;
        printf("Enter a the number_%d: ",i);
        scanf("%d",&num[i]);
        
    
    if(num[i]!=0){
        max=(max+num[i]+fabs(max-num[i]))/2;
        min=(min+num[i]-fabs(min-num[i]))/2;
        sum=sum+num[i];
    }
            }
             avrg=(float)sum/(i-2);
    printf("the greatest number is : %d \n",max);
    printf("the smallest number is : %d \n",min);
    printf("the average is : %.3f \n",avrg);
}