/*
    Faça um programa que leia um número inteiro e retorne seu antecessor e seu 
    sucessor.
*/

#include <stdio.h>

int main() {

    int num;
    printf("Insira um numero inteiro: ");
    scanf("%d", &num);

    printf("O Numero inserido foi: %d \n", num);
    printf("O antecessor e: %d \n", num-1);
    printf("O sucessor e: %d \n", num+1);

    return 0;
}