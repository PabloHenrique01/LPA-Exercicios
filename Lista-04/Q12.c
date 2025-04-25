/*
    Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores 
    desse número, com exceção dele próprio. Exemplo: A soma dos divisores do número 66 é 
    1 + 2 + 3 + 6 + 11 + 22 + 33 = 78. 
*/

#include <stdio.h>

int main() {

    int numero;
    int soma = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero > 0) {
        for (int i = 1; i < numero; i++) {
            if (numero % i == 0) {
                soma += i;
            }
        }

        printf("A soma dos divisores de %d (excluindo ele próprio) é: %d\n", numero, soma);
    } else {
        printf("Por favor, digite um número positivo.\n");
    }

    return 0;
}