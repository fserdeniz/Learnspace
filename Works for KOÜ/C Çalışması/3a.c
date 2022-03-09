#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int N;
int sum=0;
int i;
printf("Enter The Number N =");
scanf("%d",&N);
for(i=1;i<=N;i++)
{
sum=sum+i;
}
printf("The Sum of The First %d Natural Numbers is %d",N, sum);
return 0;

	
}
