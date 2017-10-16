#include<stdio.h>
void main()
{
    unsigned int n,i;
    float u=1;
    printf("Entrer la valeur de n : ");
    scanf("%u",&n);
    
    for(i=0;i<=n;i++){
        if(i==0)
            u=1;
       else if(i%2==1)
            u=(float)(2*u)+3;
        else if(i%2==0)
            u=(float)(3*u)/7;
        
  }
    printf("U%u=%.3f",n,u);
    
}