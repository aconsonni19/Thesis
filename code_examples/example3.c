#include <stdio.h>
int main(int argc, char** argv) {
    int n;
    scanf("%d", &n);
    int i = 1;
    int sum = 0;
    int product = 1;
    while(i <= n) {
        sum = sum + i;
        product = product *i;
        i++;
    }
    printf("%d\n", sum);
    printf("%d\n", product);
}