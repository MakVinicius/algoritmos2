#include <stdio.h>
#include <string.h>
#include <locale.h>

#define T 100

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int I;
    char Frase[T];
    char Maiusculo[T], Minusculo[T];

    printf("Digite uma frase para ser processada: ");
    scanf("%[^\n]", Frase);

    Maiusculo[I] = strupr(Frase);
    Minusculo[I] = strlwr(Frase);

    printf("Maiúsculo: %s\n", Maiusculo);
    printf("Minúsculo: %s\n", Minusculo);

    return 0;
}