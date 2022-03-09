#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int num1,num2,num3,max;
	printf("Enter the First Number:");scanf("%d",&num1);
	printf("Enter the Second Number:");scanf("%d",&num2);
	printf("Enter the Third Number:");scanf("%d",&num3);
	
	if(num1>num2 && num1>num3)
	{
		max=num1;
		printf("The Biggest Number is %d",max);
	}
	else if (num2>num3)
	{
		max=num2;
		printf("The Biggest Number is %d",max);
	}
	else
	{
		max=num3;
		printf("The Biggest Number is %d",max);
	}
	return 0;
}
