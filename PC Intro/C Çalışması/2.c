#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int num,rnum=0,r,palnum;
	printf("Enter the Number= ");scanf("%d",&num);
	palnum=num;
	while(num>0)
	{
		r=num%10;
		rnum*=rnum*10+r;
		num/=10;
	}
	if(palnum==rnum)
	{
		printf(" '%d' is a palindrome number\n",palnum);
	}
	else
	{
		printf("'%d' is NOT a palindrome number\n",palnum);
	}
	return 0;
}
