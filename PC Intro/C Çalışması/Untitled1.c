#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int num1,num2,i;
	printf("Enter Two Numbers to Display The Tables=%d");scanf("%d%d",&num1,&num2);
	for(i=1;i<=10;i++)
	{
		printf(" %2d x %2d = %3d  %3d x %d = %d\n",num1,i,(num1*i),num2,i,(num2*i));
	}	
	return 0;
}
