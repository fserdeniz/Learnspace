#include <stdio.h>
#include <stdlib.h>

int fact(int x);

int main(){
	int num,numx;
	printf("Enter a Number:");scanf("%d",&num);
	numx=num;
	printf("Factorial of %d is %d",numx,fact(num));
	return 0;
}

int fact(int x){
	int i,r=1;
	for(i=1;i<=x;i++){
		r=r*i;
	}
	return r;
}
