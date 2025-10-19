#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
void generate_token(char *out, size_t out_len) {
    static const char *alphabet =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789";
    size_t alpha_len = 62;

    int fd = open("/dev/urandom", O_RDONLY);
    if (fd < 0) {
        perror("Impossibile aprire /dev/urandom");
        exit(EXIT_FAILURE);
    }

    for (size_t i = 0; i < out_len - 1; ++i) {
        unsigned char r;
        if (read(fd, &r, 1) != 1) {
            perror("Errore nella lettura da /dev/urandom");
            close(fd);
            exit(EXIT_FAILURE);
        }
        out[i] = alphabet[r % alpha_len];
    }

    out[out_len - 1] = '\0';
    close(fd);
}
int main(void) {
    char token[17];
    generate_token(token, sizeof(token));
    printf("Token generato: %s\n", token);
    return 0;
}