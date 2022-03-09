#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int num1,num2,sum;
	printf("Enter the First Number:");scanf("%d",&num1);
	printf("Enter the Second Number:");scanf("%d",&num2);
	sum=num1+num2;
	printf("Sum of %d and %d is %d",num1,num2,sum);
	return 0;
}
