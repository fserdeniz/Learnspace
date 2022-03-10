#include <stdio.h>
#include <math.h>

int main(int argc , char argv [])
{
    int num;
    double sqnum;

    printf("Enter the number:"); scanf("%d",&num);

    sqnum=sqrt(num);

    printf("The square root of %d is %.3f",num,sqnum);
    return 0;
}