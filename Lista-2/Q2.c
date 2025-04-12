/*
    Faça um programa que leia um número real e imprima a quinta parte desse 
    número.
*/

#include <stdio.h>

int main() {
    
    float num;

    printf("Insira um numero real: ");
    scanf("%f", &num);

    printf("A quinta parte do valor informado e: %.2f", num/5);

    return 0;
}