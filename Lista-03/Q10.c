/*
    Faça um programa que leia três números inteiros positivos e efetue o cálculo de 
    uma das seguintes médias de acordo com um valor numérico digitado pelo usuário 
    e mostrado na tabela a seguir: 
*/

#include <stdio.h>

int main() {
    
    int t, x, y, z;
    
    printf("Insira o 1 numero: ");
    scanf("%d", &x);
    printf("Insira o 2 numero: ");
    scanf("%d", &y);
    printf("Insira o 3 numero: ");
    scanf("%d", &z);

    printf("Qual média você deseja ?\n 1- Geometrica\n 2- Ponderada\n 3- Harmonica\n 4- Artimetica\nDigite aqui: ");
    scanf("%d", &t);

    if (x <= 0 || y <= 0 || z <= 0) {
        printf("Insira um numero positivo");
        return 1;
    }

    if (t == 1) {
        printf("A media geometrica e: %d", x * y * z);
    } else if (t == 2) {
        printf("A media ponderada e: %d", (x + 2 * y + 3 * z) / 6);
    } else if (t == 3) {
        printf("A media harmonica e: %2.f", 3.0 / ((1.0 / x) + (1.0 / y) + (1.0 / z)));
    } else if (t == 4) {
        printf("A media aritmetica e: %d", (x + y + z)/ 3);
    }

    return 0;
 }