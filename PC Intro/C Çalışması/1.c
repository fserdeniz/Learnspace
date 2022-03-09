#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int bnum,dec=0,r,pwr=1;
	printf("Enter A Binary Number=");scanf("%d",&bnum);
	while(bnum>0)
	{
		r=bnum%10;
		dec=dec+r;
		bnum/=10;pw*2;
	}
	printf("The Decimal Number is %d\n",dec);
	return 0;
}
