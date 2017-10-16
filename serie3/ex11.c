#include<stdio.h>
void main()
{
    unsigned int columns,rows,i,j;
    printf("combien est la longueur du rectongle? : ");
    scanf("%u",&columns);
    printf("\ncombien est la largeur du rectongle? : ");
    scanf("%u",&rows);
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)
            printf("*");
        printf("\n");
    }

    
}