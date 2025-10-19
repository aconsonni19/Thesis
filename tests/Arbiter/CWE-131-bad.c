#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    const char *string = "Hello World"; // Length = 10
    size_t len = strlen(string); // len == 10, non include \0
    char *buf = malloc(len); // CWE-131!
    if(!buf) {
        perror("ERROR!");
        return 1;
    }
    strcpy(buf, string); // Buffer overflow!
    printf("Contenuto del buffer: %s\n", buf);
    free(buf);
    return 0;
}