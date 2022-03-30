#include <stdio.h>
#include <stdlib.h>

int fac(int);
int pwx(int,int);

int main(int argc, char *argv[]) {
int x,n,i;
float total=0;
printf("Enter value X=");scanf("%d",&x);
printf("Enter value N=");scanf("%d",&n);
for(i=1;i<=n;i++)
{
total=total+(pwx(x,i)/(double)fac(i));
}
printf("The Total=%.4f",total);printf("\n\n");
return 0;
}

int pwx(int nx, int nn)
{ int i,p;
p=1;
for(i=1;i<=nn;i++)
{p=p*nx;
}
return p;
}

int fac(int s)
{
int fc,k;
fc=1;
if(s<0)
{
return 0;
}
else if (s==0)
{
return 1;
}
else
{
for(k=1;k<=s;k++)
{
fc=fc*k;
}
return fc;
}
}


