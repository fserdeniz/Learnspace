#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int dividend,divisor;
	int quotient,remainder;
	
	printf("Enter dividend:");scanf("%d",&dividend);
	printf("Enter divisor:");scanf("%d",&divisor);
	
	quotient=dividend/divisor;
	remainder=dividend%divisor;
	
	printf("quotient: %d   remainder: %d",quotient,remainder);
	
	return 0;
}
