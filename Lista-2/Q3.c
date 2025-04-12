/*
    Faça um programa que leia três valores inteiros e mostre sua soma.
*/

#include <stdio.h>

int main() {
    
    int x, y, z;
    
    printf("Insira o primeiro numero: ");
    scanf("%d", &x);
    printf("Insira o segundo numero: ");
    scanf("%d", &y);
    printf("Insira o terceiro numero: ");
    scanf("%d", &z);

    printf("A soma dos numeros informados e: %d", x+y+z);

    return 0;
}