#include <stdlib.h>
#include <stdio.h>

int main()
{
	int rowNum,i,j;
	printf("Enter the row number:");scanf("%d",&rowNum);
	for(i=1;i<=rowNum;i++)
	{
		for(j=1;j<=rowNum-i;j++)
		printf(" ");
		
		for(j=1;j<=i;j++)
		printf("%d",j);
		
		for(j=i-1;j>=1;j--)
		printf("%d",j);
		
		printf("\n");
	}
	return 0;
}
