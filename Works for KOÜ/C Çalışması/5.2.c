#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int decnum,binnum=0,pw=1;
	printf("Enter a Decimal=");scanf("%d",&decnum);
	for(;decnum>0;decnum/=2)
	{
		binnum=binnum+(decnum%2)*pw;
		pw*=10;
	}
	printf("The Binary Code is %d\n",binnum);
	
	
	
	
	return 0;
}
