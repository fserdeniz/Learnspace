#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int num1=12, num2=7;
	float res=num1/(float)num2;
	printf("%d / %d=%0.3f",num1,num2,res);
	return 0;
}
