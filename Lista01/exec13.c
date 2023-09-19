#include <stdio.h>

int main() {
    int Vetor[20];
    int I;

    for (I = 0; I < 20; I++) {
        Vetor[I] = I * 5;
        printf("%i ", Vetor[I]);
    }
    printf("\n");

    return 0;
}