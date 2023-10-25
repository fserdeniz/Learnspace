#include<stdio.h>

int main()
{
    int cox,coy;
    printf("Enter the X Value:"); scanf("%d",&cox);
    printf("Enter the Y Value:"); scanf("%d",&coy);

    if(cox>0)
    {
        if(coy>0)
        {
            printf("The (%d,%d) is in First Quadrant",cox,coy);
        }
        else if(coy<0)
        {
            printf("The (%d,%d) is in Fourth Quadrant",cox,coy);
        }
    }

    else if(cox<0)
    {
        if(coy>0)
        {
            printf("The (%d,%d) is in Second Quadrant",cox,coy);
        }
        else if(coy<0)
        {
            printf("The (%d,%d) is in Third Quadrant",cox,coy);
        }

    }
    
    else if(cox==0 && coy==0)
    {
    	printf("Entered Value is Origin Spot");
	}


    return 0;


}
