/*
    Faça um programa que leia um caractere do tipo char e depois o imprima entre aspas 
    duplas. Assim, se o caractere lido for a letra A, deverá ser impresso “A”.
*/

#include <stdio.h>

int main() {

    char inputChar;

    printf("Digite um caractere: ");
    scanf("%c", &inputChar);
    printf("\"%c\"", inputChar);

    return 0;
}