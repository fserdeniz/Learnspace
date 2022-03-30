#include <stdio.h>
#include <stdlib.h>

void prime();
int main(int argc, char *argv[]) {
prime();
return 0;
}
void prime()
{
int number,i,flag=0;
printf("Enter positive integer number="); scanf("%d",&number);
for(i=2;i<=number/2;i++)
{
if(number%i==0) { flag=1; }
}
if (flag==1) { printf("%d is not prime",number); }
else { printf("%d is prime",number); }
}
