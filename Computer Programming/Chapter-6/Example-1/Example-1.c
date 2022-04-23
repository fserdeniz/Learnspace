#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grd[10];
    int i=0,sum=0;
    double avr;

    printf("Enter the grades:");
    while (i<10)
    {
        scanf("%d",&grd[i]);
        sum+=grd[i];
        i++; 
    }
    avr=sum/10.00;
    printf("The average of 10 grades is %.2f",avr);


    

    return 0;
}
