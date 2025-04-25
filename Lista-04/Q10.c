/*
    Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua 
    média. 
*/

#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0;
    float media;

    printf("Digite 10 números inteiros positivos:\n");

    while (contador < 10) {
        printf("Digite o %dº número: ", contador + 1);
        scanf("%d", &numero);

        if (numero > 0) {
            soma += numero;
            contador++;
        } else {
            printf("Número inválido! Digite apenas números positivos.\n");
        }
    }

    media = soma / 10.0;

    printf("A média dos 10 números positivos é: %.2f\n", media);

    return 0;
}
