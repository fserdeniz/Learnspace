#include <stdio.h>
#include <stdlib.h>

void main()
{
	int arr[100],i,sArr,max,min;
	
	printf("Enter a number of values that store in array:");
	scanf("%d",&sArr);
	
	for(i=0;i<sArr;i++)
	{
		printf("Element-%d:",i+1);
		scanf("%d",&arr[i]);
	}
	
	max=arr[0];
	min=arr[0];
	
	for(i=0;i<sArr;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	
	printf("The biggest value of this array is %d\n",max);
	printf("The smallest value of this array is %d",min);	
}
