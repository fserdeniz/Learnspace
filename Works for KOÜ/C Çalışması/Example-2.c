#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
int num1, num2,num3;
int max;
printf("Enter The First Number=");scanf("%d",&num1);
printf("Enter The Second Number=");scanf("%d",&num2);
printf("Enter The Third Number=");scanf("%d",&num3);
if(num1>num2 && num1>num3)
{
max=num1;
}
else if(num2>num3)
{
max=num2;
}
else
{
max=num3;
}
printf("The Largest Number Among %d %d %d is %d",num1,num2,num3,max);
return 0;
}
