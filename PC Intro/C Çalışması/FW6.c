#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int num,rem,palnum=0,relnum;
	printf("Enter a Number:");scanf("%d",&relnum);
	num=relnum;
	while(num!=0)
	{
		rem=num%10;
		palnum=palnum*10+rem;
		num=num/10;
	}
	if(palnum==relnum)
	{
		printf("The %d is a PALINDROME Number",relnum);
	}
	else 
	{
		printf("The %d is NOT a PALINDROME Number",relnum);
	}
	return 0;
}
