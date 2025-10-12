#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    if (x >= 5 && x <= 7) {
        printf("Numero tra 5 e 7!\n"); // Percorso A
    } else {
        printf("Numero minore di 5 o inferiore di 7! \n") // Percorso B
    }
    return 0;
}