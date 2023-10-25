#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Kullanıcıdan 3 adet sayı alınız en büyük sayıyı ilk başta sadece if kullanarak daha sonra

    //if else if else yapısıyla bulan programı yazınız

    int a,b,c;

    printf("Lutfen 3 adet sayi giriniz\n");
    scanf("%d%d%d",&a,&b,&c);

    /*if(a>b && a>c)
    {
        printf("%d sayisi en buyuktur",a);
    }
    if(b>a && b>c)
    {
        printf("%d sayisi en buyuktur",b);
    }
    if(c>a && c>b)
    {
        printf("%d sayisi en buyuktur",c);
    }
    if(a == b && a == c)
    {
         printf("Hepsi birbirine esittir");
    }*/

    if(a>b && a>c)
    {
        printf("%d sayisi en buyuktur",a);
    }
    else if(b>a && b>c)
    {
        printf("%d sayisi en buyuktur",b);
    }
    else if(c>a && c>b)
    {
        printf("%d sayisi en buyuktur",c);
    }
    else
    {
         printf("Hepsi birbirine esittir");
    }



    return 0;
}
