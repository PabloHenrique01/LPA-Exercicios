/*
    Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua 
    idade e do ano atual. 
*/

#include <stdio.h>

int main() {

    int idade;

    printf("Insira sua idade atual: ");
    scanf("%d", &idade);

    printf("O seu ano de nascimento foi em: %d", 2025 - idade);

    return 0;
}