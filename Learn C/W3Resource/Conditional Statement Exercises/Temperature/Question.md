Write a C program to read temperature in centigrade and display a suitable message according to temperature state below.

1. Temp < 0 then Freezing weather
2. Temp 0-10 then Very Cold weather
3. Temp 10-20 then Cold weather
4. Temp 20-30 then Normal in Temp
5. Temp 30-40 then Its Hot
6. Temp >=40 then Its Very Hot


```c
#include <stdio.h>
void main()
{
     int tmp;

    printf("Input days temperature : ");
    scanf("%d",&tmp);
   if(tmp<0)
             printf("Freezing weather.\n");
   else if(tmp<10)
            printf("Very cold weather.\n");
            else if(tmp<20)
                        printf("Cold weather.\n");
                    else if(tmp<30)
                               printf("Normal in temp.\n");
                            else if(tmp<40)
                                         printf("Its Hot.\n");
                                    else
                                           printf("Its very hot.\n");

}
```
