#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int n1,n2,n3;
	int mx;
	
	printf("Enter the First Number=");scanf("%d",&n1);
	printf("Enter the Second Number=");scanf("%d",&n2);
	printf("Enter the Third Number=");scanf("%d",&n3);
	
	if(n1>n2 && n1>n3)
	{
		mx=n1;
	}
	else if(n2>n3)
	{
		mx=n2;
	}
	else
	{
		mx=n3;
	}
	
	printf("The Biggest Number Among %d %d %d is %d",n1,n2,n3,mx);
	
	return 0;
	
}
