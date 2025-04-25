/*
    Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. 
    Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de 
    ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos 
    anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34. 
*/

#include <stdio.h>

int main() {

    int N;
    int a = 0, b = 1, proximo;

    printf("Digite um número inteiro maior ou igual a zero: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Por favor, digite um número maior ou igual a zero.\n");
        return 1;  
    }

    if (N == 0) {
        printf("O %dº termo da sequência de Fibonacci é: %d\n", N, a);
    }

    else if (N == 1) {
        printf("O %dº termo da sequência de Fibonacci é: %d\n", N, b);
    }

    else {
        for (int i = 2; i <= N; i++) 
        {
            proximo = a + b; 
            a = b;
            b = proximo;
        }
        printf("O %dº termo da sequência de Fibonacci é: %d\n", N, b);
    }
    
    return 0;
}