#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_is_negative(int n) {
    if (n < 0) {
        write(1, "N", 1);
    } else {
        write(1, "P", 1);
    }
}

int main() {
    int number = -5; // Bir sayi belirleyin
    ft_is_negative(number);
    return 0;
}