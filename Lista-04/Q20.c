/*
    Faça um programa que leia um valor inteiro e positivo N, calcule o mostre o 
    valor E, conforme a fórmula a seguir...
*/

#include <stdio.h>

int main () {

    int fat = 1;
    int n;
    float e = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            fat *= j;  //fat = fat * j
        }

        e += (1.0/(float)fat);
        fat = 1;
    }

    printf("E = %f\n", e);

    return 0;

}