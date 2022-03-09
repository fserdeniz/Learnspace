#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int n1,n2,n3,n4,n5;
	int sum=0;
	double avr;
	printf("Enter the First Number:");scanf("%d",&n1);
	printf("Enter the Second Number:");scanf("%d",&n2);
	printf("Enter the Third Number:");scanf("%d",&n3);
	printf("Enter the Fourth Number:");scanf("%d",&n4);
	printf("Enter the Fifth Number:");scanf("%d",&n5);
	sum=n1+n2+n3+n4+n5;
	avr=sum/5.0;
	printf("Aritmethic Mean of %d %d %d %d %d is %.2f",n1,n2,n3,n4,n5,avr);
	
	
	return 0;
}
