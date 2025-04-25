/*
    Escreva um programa que leia certa quantidade de números, imprima o maior 
    deles e quantas vezes o maior número foi lido. A quantidade de números a 
    serem lidos deve ser fornecida pelo usuário. 
*/

#include <stdio.h>

int main() {
    int quantidade, numero;
    int maior, contador = 0;

    printf("Quantos números você deseja digitar? ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("Quantidade inválida!\n");
        return 1;
    }

    for (int i = 0; i < quantidade; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numero);

        if (i == 0) {
            maior = numero;
            contador = 1;
        } else {
            if (numero > maior) {
                maior = numero;
                contador = 1;
            } else if (numero == maior) {
                contador++;
            }
        }
    }

    printf("\nMaior número: %d\n", maior);
    printf("Quantidade de vezes que o maior número foi lido: %d\n", contador);

    return 0;
}
