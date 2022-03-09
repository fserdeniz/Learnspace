#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int dividend,divisor;
	int quotient,remainder;
	printf("Dividend:");scanf("%d",&dividend);
	printf("Divisor:");scanf("%d",&divisor);
	quotient=dividend/divisor;
	remainder=dividend%divisor;
	printf("Quotient:%d\nRemainder:%d",quotient,remainder);
	return 0;
}
