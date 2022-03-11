#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int num1,num2;
    float fnum1,fnum2;
    
    scanf("%d %d\n",&num1,&num2);
    scanf("%f %f",&fnum1,&fnum2);
    
    printf("%d %d\n",num1+num2,num1-num2);
    printf("%.1f %.1f",fnum1+fnum2,fnum1-fnum2);
    
    return 0;
}