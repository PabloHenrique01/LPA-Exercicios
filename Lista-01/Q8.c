/*
    Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa 
    em que eles foram lidos.
*/

#include <stdio.h>

int main() {

    int a, b;

    printf("Digite 2 valores inteiros: ");
    scanf("%d %d", &a, &b);
    printf("%d %d\n", b, a);

    return 0;
}