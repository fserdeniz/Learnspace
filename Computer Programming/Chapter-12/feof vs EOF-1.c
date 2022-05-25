#include <stdio.h>
void main(){
FILE *fl1,*fl2;
char filenameWR[50]="ozifile.txt";
char filenameRD[50]="rd.txt";
char val;
fl1=fopen(filenameRD,"r"); fl2=fopen(filenameWR,"w");
while(1)
{
val=getc(fl1);
putc(val,fl2);
if(feof(fl1))
{ break; }
}
fclose(fl1);
fclose(fl2);}