#include <stdio.h>
#include <stdlib.h>

int main(){
	float num;
	
	printf("Sayi degerini giriniz:");scanf("%f",&num);
	printf("Fonksiyon sonucu f(%.3f): %.3f", num, num*num*num + 13*num*num + 47*num + 5);
	
	return 0;
}
