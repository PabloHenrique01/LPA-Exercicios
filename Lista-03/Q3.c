/*
    Faça um programa que leia um número inteiro e verifique se esse número é par ou
    ímpar.
*/
#include <stdio.h>

int main(){

    int x;

    printf("Digite um numero inteiro:\n");
    scanf("%i", &x);
    if (x % 2 == 0 ){

        printf("O numero digitado e par.");
    }
    else{
        printf("O numero digitado e impar.");
    }

    return 0;

}