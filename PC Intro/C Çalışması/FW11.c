#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int sum=0, N;
	printf("Enter the Number:"); scanf("%d",&N);
	while(N>0)
	{
		if(N%7==0 && N%2!=0)
		{
			sum+=N;
		}
		N=N-1;
	}
	printf("Your result is %d",sum);
	return 0;
}
