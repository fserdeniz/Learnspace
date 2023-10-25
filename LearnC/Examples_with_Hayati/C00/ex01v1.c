#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

void ft_print_alphabet() {
    int fd;
    char dizi[] = "abcdefghijklmnoprstuvwyz";

    fd = open("./example_text.txt", O_RDWR);

    if (fd == -1) {
        perror("Yazimda hata var");
        exit(EXIT_FAILURE);
    }

    write(fd, &dizi, strlen(dizi));

    close(fd);
}

int main() {
    ft_print_alphabet();
    return 0;
}