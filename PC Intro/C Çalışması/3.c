#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int N,sum=0,count=1;
	printf("Enter the Number=");scanf("%d",& N);
	while(count<=N){
		sum=sum+count;count++;
	}
	printf("The Sum of %d is %d",N,sum);
	return 0;
	
}
