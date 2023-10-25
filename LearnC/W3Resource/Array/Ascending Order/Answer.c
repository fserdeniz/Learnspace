#include <stdio.h>
#include <stdlib.h>

void main()
{
	int arr[100],i,j,n,temp;
	
	printf("Enter a size of array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter a value of index %d:",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("\nElements of array are %d",arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	printf("\nElements of array in ascending order is\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);	
	}

}
