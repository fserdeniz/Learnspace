#include <unistd.h>

int main() {
    char ch;
    char newline = '\n';

    for (ch = 'a'; ch <= 'z'; ch++) {
        write(STDOUT_FILENO, &ch, 1); // Karakteri ekrana yaz
    }

    write(STDOUT_FILENO, &newline, 1); // Yeni satir karakterini ekrana yaz

    return 0;
}
