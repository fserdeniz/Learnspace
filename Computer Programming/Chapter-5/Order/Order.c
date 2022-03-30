#include <stdio.h>
#include <stdlib.h>

void orderdes(int x, int y, int z);

int main(int argc, char *argv[]) {
	int num1,num2,num3;
	
	printf("Enter Three Numbers:");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	orderdes(num1,num2,num3);

return 0;
}

void orderdes(int n1, int n2, int n3){
	int grdnum,midnum,lesnum;
	
	if(n1>n2 && n1>n3){
		grdnum=n1;
		
		if(n2>n3){
			midnum=n2;
			lesnum=n3;
		}
		
		else{
			midnum=n3;
			lesnum=n2;
		}
	}
	
	else if(n2>n1 && n2>n3){
		grdnum=n2;
		if(n1>n3){
			midnum=n1;
			lesnum=n3;
		}
		else{
			midnum=n3;
			lesnum=n1;
		}
	}
	
	else {
		grdnum=n3;
		if(n1>n2){
			midnum=n1;
			lesnum=n2;
		}
		else{
			midnum=n2;
			lesnum=n1;
		}
	}
	printf("The order of %d %d and %d is %d > %d > %d",n1,n2,n3,grdnum,midnum,lesnum);
}
