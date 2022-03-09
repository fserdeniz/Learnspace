#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int sum=0,count;
	for(count=1;count<=15;count++)
	{
		if((count%5)==0)
		{
		sum=sum+count;
		}
	}
	printf("The Sum of Values is %d", sum);
	return 0;
}
