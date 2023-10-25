#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

void ft_putchar() {
    int fd;
    char buffer[1024] = "Bu metin, test amaciyla yazilmistir.";

    fd = open("./example_text.txt", O_WRONLY | O_CREAT, 0644);

    if (fd == -1) {
        perror("Dosya acilirken hata olustu");
        exit(EXIT_FAILURE);
    }

    write(fd, &buffer, strlen(buffer));

    close(fd);
}

int main() {
    ft_putchar();
    return 0;
}

