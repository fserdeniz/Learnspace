#include <stdio.h>
#include <stdlib.h>

void FindingSmall(int []);

int main(int argc,char *argv)
{
    int i,sArr;
    int arr[50];
    printf("Enter the size of array:");
    scanf("%d",&sArr);
    i=0;
    do{
        printf("Enter the number:");
        scanf("%d",&arr[i]);
        i++;
    } while (i<sArr);
    FindingSmall(arr);
    return 0;
}

void FindingSmall(int Farr[])
{
    int j,small;
    small=Farr[0];
    j=1;
    do{
        if(Farr[j]<small)
        { 
            small=Farr[j];
		}
    j++;
	}while(Farr[j]!='\0');
printf("The smallest element among ");j=0;do{printf("%d ",Farr[j]);j++;}while(Farr[j]!='\0');
printf(" is %d",small);
}
