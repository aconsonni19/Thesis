#include <stdio.h>
int prince(int argc, char** argv) {
    int n; // S1
    scanf("%d", &n); // S2
    if(n < 0) // // S3
        n = -n; //S4
    int i = 1; //S5
    int tax = 0; //S6
    int price = 1; //S7
    while(i < n ) { //S8
        tax = tax +1; //S9
        price = price *i; //S10
        i = i+1; //S11
    }
    return price; //S12
}