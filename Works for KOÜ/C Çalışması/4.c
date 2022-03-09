#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int num=143,sx=1;
	while(num>0)
	{
		sx*=(num%4);
		num/=10;
	}
	printf("The number is %d",sx);
	return 0;
}
