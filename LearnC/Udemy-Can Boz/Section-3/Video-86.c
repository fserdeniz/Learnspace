#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1,num2,num3;
	int max,med,min;
	
	printf("1.numarayi giriniz:");scanf("%d",&num1);
	printf("2.numarayi giriniz:");scanf("%d",&num2);
	printf("3.numarayi giriniz:");scanf("%d",&num3);
	printf("--------------------\n");
	
	if(num1>num2 && num1>num3){
		max=num1;
		if(num2>num3) {
			med=num2;
			min=num3;
		}
		else {
			med=num3;
			min=num2;
		}
	}
	
	else if(num2>num3 && num2>num1){
		max=num2;
		if(num1>num3){
			med=num1;
			min=num3;
		}
		else {
			med=num3;
			min=num1;
		}
	}
	
	else {
		max=num3;
		if(num1>num2){
			med=num1;
			min=num2;
		}
		else {
			med=num2;
			min=num1;
		}
	}
	
	printf("En buyuk sayi:%d\n",max);
	printf("Ortanca sayi:%d\n",med);
	printf("En kucuk sayi:%d\n",min);
	
	return 0;
}
