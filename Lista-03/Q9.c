/*
    Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela 
    a seguir, verifique e mostre qual a classificação dessa pessoa.

    Altura:                                          Peso
                                    Até 60      Entre 60-90     Acima de 90
       * Menor que 1,20                A             D             G
       * Entre 1,20 ~ 1,70             B             E             H
       * Mario que 1,70                C             F             I
*/

#include <stdio.h>

int main() {

    float peso;
    double altura;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%lf", &altura);

    if (peso <= 60 && altura < 1.20) {
        printf("Voce pertence a categoria: A");
    } else if (peso > 60 && peso <= 90 && altura < 1.20) {
        printf("Voce pertence a categoria: D");
    } else if (peso > 90 && altura < 1.20) {
        printf("Voce pertence a categoria: G");
    } else if (peso <= 60 && altura >= 1.20 && altura <= 1.70) {
        printf("Voce pertence a categoria: B");
    } else if (peso > 60 && peso <= 90 && altura >= 1.20 && altura <= 1.70) {
        printf("Voce pertence a categoria: E");
    } else if (peso > 90 && altura >= 1.20 && altura <= 1.70) {
        printf("Voce pertence a categoria: H");
    } else if (peso <= 60 && altura > 1.70) {
        printf("Voce pertence a categoria: C");
    } else if (peso > 60 && peso <= 90 && altura > 1.70) {
        printf("Voce pertence a categoria: F");
    } else if (peso > 90 && altura > 1.70) {
        printf("Voce pertence a categoria: I");
    } else {
        printf("ERRO: Voce digitou alguma informação com sintaxe incorreta");
    }

    return 0;
}