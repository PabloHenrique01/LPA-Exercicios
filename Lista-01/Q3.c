/*
    Escreva um programa que leia um número inteiro e depois imprima a mensagem “Valor 
    lido:”, seguido do valor inteiro. Use apenas um comando printf(). 
*/

#include <stdio.h>

int main() {
    int inputValor;

    scanf("%d", &inputValor);
    printf("Valor lido: %d", inputValor);
    
    return 0;
}