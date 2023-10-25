#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	printf("Sayi giriniz:"); scanf("%d",&num);
	while(num>0){
		printf("%d ",num);
		num--;
	}
	return 0;
}
