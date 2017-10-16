#include<stdio.h>
void main()
{
   
    
    unsigned int N,i,X;
    int produit=1;
    printf("ce programme calcule X^N en utilisant les multiplications successives\n");
    printf("\nEntrer la valeur de X : ");
    scanf("%d",&X);
    printf("\nEntrer la valeur de N : ");
    scanf("%d",&N);
    if(N>0){
    for(i=0;i<N;i++){
        produit*=X;
    }
    
     
  }
    else if(X==0&&N==0)
        printf("Math Error");
    else
        produit=1;
        
    
    printf("%d^%d=%d",X,N,produit);
}