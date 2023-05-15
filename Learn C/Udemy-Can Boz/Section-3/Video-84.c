#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b,c,x;
	int toplam;
	
	printf("a,b,c ve x degerlerini giriniz:");
	scanf("%d %d %d %d",&a,&b,&c,&x);
	
	toplam= (a*x*x)+(b*x)+c;
	
	printf("Sonuc:%d",toplam);
	
	return 0;
}
