#include <stdio.h>
#include <stdlib.h>

int main (int argc , char argv [])
{
    int sernum,sertot=0,numx,num;
    printf("Enter a number:");scanf("%d",&num);
    printf("Enter a series number:");scanf("%d",&sernum);
    
    numx=num;

    while (sernum>0)
    {
        sertot+=num;
        printf("%d ",num);
        num= num*10+numx;
        sernum--;
    }

    printf("\nThe Sum of the series %d = %d", numx,sertot);
    
    return 0;
}
