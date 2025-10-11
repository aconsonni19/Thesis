#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    printf("Inserisci la lunghezza del vettore");
    int n = 0;
    scanf("%d", &n);
    if(n <= 0)
        exit(1);
    int V[n];
    printf("Inserisci %d numeri", n);
    int i = 0;
    int input;
    while(i < n) {
        scanf("%d", &input);
        V[i] = input;
        i++;
    }
    i = 1;
    int max = V[i];
    while(i < n) {
        if(V[i] > max)
            max = V[i];
        i++;
    }
    printf("Max: %d", max);
}


