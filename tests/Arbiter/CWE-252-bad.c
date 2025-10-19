#include <stdio.h>
#include <unistd.h>
int main(void) {
    setuid(1000);  // CWE-252! Il valore di ritorno viene ignorato!
    // Continua ad eseguire come se i privilegi fossero stati rimossi
    if (getuid() == 0) {
        printf("VULNERABILE!\n");
    } else {
        printf("UID corrente: %d\n", getuid());
    }
    return 0;
}
