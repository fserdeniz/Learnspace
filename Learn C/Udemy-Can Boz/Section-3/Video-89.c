#include <stdio.h>
#include <stdlib.h>

int main(){
	int borderNum,curNum=1,totNum=0;
	
	printf("Maksimum sayiyi giriniz:");scanf("%d",&borderNum);
	
	while(curNum<=borderNum){
		if(curNum==borderNum){
			printf("%d",borderNum);
		}
		else {
			printf("%d + ",curNum);
		}
		totNum+=curNum;
		curNum++;
	}
	
	printf("= %d",totNum);
	printf("\n1 den %d ye kadar olan sayilarin toplami:%d",borderNum,totNum);
	
	return 0;
}
