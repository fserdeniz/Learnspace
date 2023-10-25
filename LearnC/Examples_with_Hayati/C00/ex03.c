#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

void ft_print_numbers() {
    int fd;
    int num;

    fd = open("./example_text.txt", O_RDWR);

    for(num=0; num<=9;num++){
        write(fd, &num, strlen(10));
    }

    if (fd == -1) {
        perror("Yazimda hata var");
        exit(EXIT_FAILURE);
    }

    close(fd);
}

int main() {
    ft_print_numbers();
    return 0;
}