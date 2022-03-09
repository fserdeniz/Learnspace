#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int i,j,N;
	printf("Enter the Number=");scanf("%d",&N);
	for(i=N;i>=1;i--)
	{
		for(j=N;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
