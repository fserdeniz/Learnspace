#include <stdio.h>
#include <stdlib.h>

int main(){
	int kisaKenar,uzunKenar,yukseklik;
	int tabanAlan,yanalAlan,alan,hacim;
	
	printf("Dikdortgen prizmanin kisa kenar uzunlugunu giriniz:");
	scanf("%d",&kisaKenar);
	
	printf("Dikdortgen prizmanin uzun kenar uzunlugunu giriniz:");
	scanf("%d",&uzunKenar);
	
	printf("Dikdortgen prizmanin yuksekligini giriniz:");
	scanf("%d",&yukseklik);
	
	tabanAlan= 2*kisaKenar*uzunKenar;
	yanalAlan= 2*kisaKenar*yukseklik + 2*uzunKenar*yukseklik;
	alan= tabanAlan + yanalAlan;
	hacim= uzunKenar*kisaKenar*yukseklik;
	
	printf("Dikdortgen prizmanin:\n");
	printf("Taban Alani:%d\n",tabanAlan/2);
	printf("Yanal Alan Toplami:%d\n",yanalAlan);
	printf("Toplam Alan:%d\n",alan);
	printf("Hacim:%d",hacim);
	
	return 0;
}
