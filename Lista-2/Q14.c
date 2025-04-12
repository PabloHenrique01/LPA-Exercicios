#include <stdio.h>

char x;

int main() {

    printf("Digite uma letra maiuscula: ");
    scanf("%c", &x);

    printf("Letra minuscula = %c", x + 32);

    return 0;
}