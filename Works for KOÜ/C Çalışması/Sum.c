#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int num;
int sum=0;
scanf("%d",&num);
while(num>0)
{
sum=sum+num;
scanf("%d",&num);
}
printf("The Sum=%d",sum);

	return 0;
}
