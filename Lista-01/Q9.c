/*
    Faça um programa que leia dois valores do tipo float. Use um único comando de leitura 
    para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos. 
*/

#include <stdio.h>

int main() {

    float a, b;

    printf("Digite dois numeros (tipo FLOAT): ");
    scanf("%f %f", &a, &b);
    printf("%f %f\n", b, a);

    return 0;
}