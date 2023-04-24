#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=10;int arr[]={'a','b','c'};
	for(;i<sizeof(arr)/sizeof(arr[0]);i++);printf("%d\n",i);
	return 0;
	
}
