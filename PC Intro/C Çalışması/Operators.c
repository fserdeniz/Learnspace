#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	int a=9,b=4,c;
	
c = a+b;
printf("a+b = %d",c);
c = a-b;
printf("a-b = %d",c);
c = a*b;
printf("a*b = %d",c);
c=a/b;
printf("a/b = %d",c);
c=a%b;
printf("Remainder when a divided by b = %d \n",c);
return 0;
}
