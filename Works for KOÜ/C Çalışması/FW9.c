#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int num,relnum=1;
	printf("Enter the number:"); scanf("%d",&num);
	while(num!=0)
	{
		relnum=relnum*(num%10);
		num=num/10;
	}
	printf("The Product is %d",relnum);
	return 0;
}
