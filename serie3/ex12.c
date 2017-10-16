#include<stdio.h>
void main()
{
    int rows,i,j;
    printf("how many rows;");
          scanf("%d",&rows);
    for(i=0;i<rows;i++){
        for(j=0;j<=i;j++)
            printf("*");
        printf("\n");
    }
}