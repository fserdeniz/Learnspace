#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int i,n,k;
printf("Enter A Number=");scanf("%d",&n);
i=1;k=1;
while(i<=10)
{
while(k<=n)
{
printf("%dx%d=%2d ",k,i,k*i);k++;
}
i++;k=1;
printf("\n");
}
return 0;
}
