#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int binnum,decnum=0,pw=2,rem;
	printf("Enter the Binary Number:");scanf("%d",&binnum);
	while(binnum!=0)
	{
		rem=binnum%10;
		decnum=decnum+rem*(pw/2);
		pw=pw*2;
		binnum/=10;
	}
	printf("The Decimal Number is %d",decnum);
	return 0;
}
