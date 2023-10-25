#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_print_numbers() {
    char num[10]; // Karakter dizisi olarak tanımlayın
    int i;

    for (i = 0; i <= 9; i++) {
        num[i] = '0' + i; // Tam sayıları karakterlere dönüştürün
    }

    write(1, num, 10); // Karakter dizisini yazdırın
}

int main() {
    ft_print_numbers();
    return 0;
}
