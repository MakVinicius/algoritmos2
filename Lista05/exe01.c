#include <stdio.h>
#define T 100
#define Y 2

typedef char String[T];

int main() {
    String Nomes[Y];
    int I;

    printf("Digite %d Nomes: \n", Y);
    for (I = 0; I < Y; I++) {
        scanf(" %[^\n]s", &Nomes[I]);
    }


    return 0;
}