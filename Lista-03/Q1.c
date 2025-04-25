/*
    Faça um programa que leia dois números e mostre qual deles é o maior.
*/

#include <stdio.h>

int main() {

    int x, y;

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    if (x > y) {
        printf("%d e maior que %d. \n", x, y);
    } else {
        printf("%d e maior que %d. \n", y, x);
    }

    return 0;
}