#include<stdio.h>
void main()
{
    unsigned int N,produit=1,temp;
    printf("ce programme permet de calculer la factorielle d'un nombre Entier\n");
    printf("Entre un nombre entier : ");
    scanf("%u",&N);
    temp=N;
    if(N!=0){
   for(N=N;N>0;N--){
       produit*=N;
    }
    }
    else
        produit=1;
    printf("\n%u!=%u",temp,produit);
  }