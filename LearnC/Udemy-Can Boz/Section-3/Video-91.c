#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1,num2;
	
	printf("Iki sayi giriniz:");scanf("%d %d",&num1,&num2);
	
	if((num1>0 && num2>0)||(num1<0 && num2<0))  {
		printf("Islem sonucu isaret +");
	}
	else if(num1<0 || num2<0){
		printf("Islem sonucu isaret -");
	}
	else if(num1==0 || num2==0){
		printf("Islem sonucu 0");
	}
	return 0;
}
