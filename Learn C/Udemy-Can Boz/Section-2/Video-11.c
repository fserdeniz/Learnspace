#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        int (4 bytes) | %d
        double  (8 bytes) | %lf
        float (4 bytes) | %f
        char (1 byte) | %c

    */
    float sayim = 5.65;
    double sayim2 = 6.66;
    char can='a';


    printf("1.sayim:%.2f 2.sayim:%.2lf Karakterim:%c",sayim,sayim2,can);

    return 0;
}
