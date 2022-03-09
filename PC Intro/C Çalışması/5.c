#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int r,decnum,binnum=0,pw=1,num;
	printf("Enter a Decimal=");scanf("%d",&decnum);
	for(num=decnum;num>0;num/=2)
	{
		r=num%2;
		binnum=binnum+r*pw;
		pw*=10;
	}
	printf("The Binary Code is %d\n",binnum);
	
	
	
	
	return 0;
}
