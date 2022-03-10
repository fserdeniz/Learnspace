#include <stdio.h>
#include <math.h>

int main(int argc , char argv [])
{
   float temp;
   int sel;

   printf("Fahrenheit to Celcius [1]");
   printf("Celcius to Fahrenheit [2]");
   printf("Enter your choice [1 or 2]");scanf("%d",&sel);

   if(sel == 1)
        {
        printf("The Temperature in Celsius is %0.3f",(temp-32)/1.8);
        }

    else
        {
        printf("The Temperature in Fahrenheit is %0.3f",(temp*1.8)+32);
        } 

return 0;
}