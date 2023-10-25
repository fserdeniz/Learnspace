#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

void ft_print_numbers() {
 
 		char numbers[10] = "0123456789";
        write(1,&numbers,10);

}



int main() {
    ft_print_numbers();
    return 0;
}
