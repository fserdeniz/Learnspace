#include <stdio.h>
#include <stdlib.h>

int main()
{

  /* Kullanıcıdan 1 sayı girmesini isteyiniz 1 den gireceğiniz sayıya kadar olan sayıların
  toplamını for döngüsüyle hesaplayınız
 */
    int sayim;
    int i,toplam=0;



   printf("Lutfen bir sayi giriniz\n");
   scanf("%d",&sayim);

   for(i=1;i<=sayim;i++)
   {
       toplam += i;
   }

   printf("Toplam:%d",toplam);


    return 0;
}
