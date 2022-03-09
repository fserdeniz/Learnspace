#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int num, relnum,palnum=0,rem;
printf("Enter The A Number=");
scanf("%d",&relnum);
num=relnum;
while(num!=0)
{
rem=num%10;
palnum=palnum*10+rem;
num=num/10;
}
if(palnum==relnum){printf("Number %d is a Palindrome Number",relnum);
}
else{printf("Number %d is NOT a Palindrome Number",relnum);}
return 0;
}
