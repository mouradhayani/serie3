#include<stdio.h>
void main()
{
    unsigned int N,produit=1,temp;
    printf("ce programme permet de calculer la factorielle d'un nombre Entier\n");
    printf("Entre un nombre entier : ");
    scanf("%u",&N);
    temp=N;
    if(N!=0){
    while(N>0){
        produit*=N;
        N--;
    }
    }
    else
        produit=1;
    printf("\n%u!=%u",temp,produit);
  }