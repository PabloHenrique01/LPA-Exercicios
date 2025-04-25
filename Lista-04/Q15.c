/*
    Elabore um programa que faça a leitura de vários números inteiros até que se digite um 
    número negativo. O programa tem de retornar o maior e o menor número lido.
*/

#include <stdio.h>

int main() {
    int numero;
    int maior, menor;
    int primeiro = 1; 

    printf("Digite números inteiros (digite um número negativo para encerrar):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        if (primeiro) {
            maior = menor = numero;
            primeiro = 0;
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }
    }

    if (primeiro) {
        printf("Nenhum número positivo foi digitado.\n");
    } else {
        printf("Maior número digitado: %d\n", maior);
        printf("Menor número digitado: %d\n", menor);
    }

    return 0;
}
