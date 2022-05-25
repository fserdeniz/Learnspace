#include <stdio.h>
#include <stdlib.h>

void main (){
    int i,j,rows;
    printf("Enter a row number:");scanf("%d",&rows);

    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }









}