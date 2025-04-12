/*
    Faça um programa que leia um valor do tipo double e depois o imprima na forma de 
    notação científica. 
*/

#include <stdio.h>

int main() {

    double inputValor;

    printf("Digite um numero: ");
    scanf("%lf", &inputValor);
    printf("Seu numero em notacao e: %e", inputValor);

    return 0;
}