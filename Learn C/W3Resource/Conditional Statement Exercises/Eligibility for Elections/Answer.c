#include <stdio.h>
#include <stdlib.h>

int main(){
    int vAge,eAge=18;
    printf("Enter your age:");
    scanf("%d",&vAge);
    if(vAge>eAge){
        printf("You're eligible to participate elections.");
    }
    else{
        printf("You're NOT ELIGIBLE to participate elections.");
    }
    return 0;
}