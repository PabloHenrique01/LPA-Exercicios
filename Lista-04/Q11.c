/*
    Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os 
    divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66. 
*/

#include <stdio.h>

int main() {
    int numero;
    do {
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &numero);

        if (numero <= 0) {
            printf("Número inválido! Tente novamente.\n");
        }
    } while (numero <= 0);

    printf("Os divisores do número %d são: ", numero);
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
