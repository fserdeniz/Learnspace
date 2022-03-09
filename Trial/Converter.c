#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int binnum,rem,decnum=0,pw=2;
printf("Enter A Binary Number Like '1101': ");
scanf("%d",&binnum);
while(binnum!=0)
{
rem=binnum%10;
decnum=decnum+rem*(pw/2);
pw=pw*2;
binnum/=10;
}
printf("The Decimal Number:%d",decnum);
return 0;
}
