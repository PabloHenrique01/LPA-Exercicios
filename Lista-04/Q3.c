/* 
    Faça um programa que leia um número inteiro N e depois imprima os N primeiros 
    números naturais ímpares. 
*/

#include <stdio.h>

int main() {
    int num, count = 0, numero = 1;

    printf("Digite um número inteiro N: ");
    scanf("%d", &num);

    printf("Os %d primeiros números naturais ímpares sao:\n", num);

    while (count < num) {
        printf("%d ", numero);
        numero += 2;
        count++;
    }

    return 0;
}