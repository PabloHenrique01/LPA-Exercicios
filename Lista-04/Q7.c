/*
    Elabore um programa que peça ao usuário para digitar 10 valores. Some esses valores e 
    apresente o resultado na tela. 
*/

#include <stdio.h>

int main() {
    int valor, soma = 0;

    printf("Digite 10 números inteiros:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &valor);
        soma += valor;  // soma = soma + valor;
    }

    printf("A soma dos 10 valores é: %d\n", soma);

    return 0;
}
