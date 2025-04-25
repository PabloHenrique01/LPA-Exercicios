/*
    Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. 
*/

#include <stdio.h>

int main() {
    
    int base = 0;

    printf("A soma dos 50 primeiros numeros pares e: ");

    for (int i = 1; i <= 50; i++) {
        base += 2 * i;
    }
    printf("%d\n", base);

    

    return 0;

}