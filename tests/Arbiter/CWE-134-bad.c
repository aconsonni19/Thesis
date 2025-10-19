#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main(void) {
    char buf[128];
    printf("Inserisci una stringa: ");
    if(fgets(buf, sizeof(buf), STDIN_FILENO) == NULL) {
        return 1;
    }
    buf[strcspn(buf, "\n")] = '\0'; // Rimuovi newline
    printf(buf); // CWE-134!
    printf("\n");
    return 0;
}