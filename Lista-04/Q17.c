/*
    Escreva um programa que leia um número inteiro positivo N e em seguida imprima N 
    linhas do chamado triângulo de Floyd:
*/

#include <stdio.h>

int main () {

    int linhas, contador = 1;

    printf("Digite um valor inteiro: ");
    scanf("%d",&linhas);

    for (int i = 1; i <= linhas; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf("%d ", contador);
            contador++;

        }
        printf("\n");
    }
}