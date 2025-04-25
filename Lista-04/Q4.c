/*
    Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 
    considerando números maiores que 0. 
*/

#include <stdio.h>

int main() {
    
    int base = 0;

    printf("Os 5 primeiros multiplos de 3 são: ");

    for (int i = 1; base < 5; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
            base++;
        }
    }
}