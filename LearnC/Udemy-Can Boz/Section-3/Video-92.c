#include <stdio.h>
#include <stdlib.h>

int main(){
	int limit,index=0,satir=0;
	
	printf("Limit degeri giriniz:");scanf("%d",&limit);
	
	while(index<=limit){
		if(index%17==0){
			printf("%5d",index);
			satir++;
			if(satir%10==0){
			printf("\n");
		}
		}
		index++;
		
	}
	
	return 0;
}
