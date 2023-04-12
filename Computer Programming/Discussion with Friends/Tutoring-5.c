#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1,num2,tot=0;
	printf("Enter the starting point:");scanf("%d",&num1);
	printf("Enter the finishing point:");scanf("%d",&num2);
	
	for(;num2>=num1;num2--)
	{
		if(num2%9==0)
		{
			tot=tot+num2;
		}
	}
	printf("Sum of the numbers is %d",tot);
	return 0;
}
