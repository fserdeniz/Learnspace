#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int r=1,c=1;
	while(r<=5)
	{
		while(c<=r)
		{
			printf("%d",c);
			c++;
		}
		printf("\n");
		c=1;
		r++;
	}
	return 0;
}
