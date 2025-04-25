/*
    Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor 
    lido.
*/

#include <stdio.h>

int main() {
    int numero, menor, maior;

    printf("Digite o 1º número: ");
    scanf("%d", &numero);

    menor = maior = numero;  // Inicializa com o primeiro valor lido

    for (int i = 2; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);

        if (numero < menor) {
            menor = numero;
        }

        if (numero > maior) {
            maior = numero;
        }
    }

    printf("Menor valor lido: %d\n", menor);
    printf("Maior valor lido: %d\n", maior);

    return 0;
}
