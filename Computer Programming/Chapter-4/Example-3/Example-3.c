#include <stdio.h>
#include <stdlib.h>

int main (int argc , char argv [])
{
    int num,conum=1;
    printf("Enter a number:");scanf("%d",&num);

    do
    {
        printf("%dx%2d =%2d\n",num,conum,num*conum);
        conum++;
    }
    while(conum<=10);


    
    return 0;
}