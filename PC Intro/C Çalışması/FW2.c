#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int N,sum;
	int i;
	printf("Enter the Value:"); scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		sum=sum+i;
	}
	printf("The Sum of 1 to %d is %d",N,sum);
	
	return 0;
}
