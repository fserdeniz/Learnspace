#include <stdio.h>
#include <stdlib.h>


int calculateLayer(int x,int y,int z)
{
	int absX,absY;
	absX= abs(x-z);
	absY= abs(y-z);
	return absX>=absY ? absX : absY;

}
int main(){
	int i,j,givenNumber;
	printf("Enter a matrix layer value:");scanf("%d",&givenNumber);
	for(j=0;j<(2*givenNumber)-1;j++)
	{
		for(i=0;i<(2*givenNumber)-1;i++)
		{
			printf("%d",calculateLayer(j,i,givenNumber-1)+1);
		}
		printf("\n");
	}






}
