/*
    Faça um programa que calcule e escreva o valor de S:
*/

#include <stdio.h>

int main() {
    int numerador = 1, denominador = 1;
    float s = 0.0;

    while (numerador <= 99 && denominador <= 55) {
        s += (float)numerador / denominador;
        numerador += 2; 
        denominador += 1; 
    }

    printf("O valor de S é: %.6f\n", s);

    return 0;
}
