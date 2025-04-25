/*
    Faça um programa que leia 10 inteiros e imprima sua média.
*/

#include <stdio.h>

int main() {
    int numero, soma = 0;
    float media;

    printf("Digite 10 números inteiros:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);
        soma += numero;
    }

    media = soma / 10.0;  // 10.0 para forçar divisão com ponto flutuante

    printf("A média dos 10 números é: %.2f\n", media);

    return 0;
}
