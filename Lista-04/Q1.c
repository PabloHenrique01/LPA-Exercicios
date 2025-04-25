/*
    Faça um programa que leia um número inteiro positivo N e imprima todos os números 
    naturais de 0 até N em ordem crescente.
*/

#include <stdio.h>
#include <stdlib.h>

int main() { 
    
    int num1;

    printf("Insira um numero: ");
    scanf("%d", &num1);

    if (num1 < 0) {
        printf("Insira um numero positivo");
        return -1;
    }

    for (int i = 0; i <= num1; i++) {
        printf("%d\n", i);
    }
    
    return 0;
}