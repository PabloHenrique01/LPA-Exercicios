/*
    Em matemática, o número harmônico designado por Hn define-se como o enésimo termo 
    da série harmônica. Ou seja: 
    Apresente um programa que calcule o valor de qualquer Hn.
*/

#include <stdio.h>

int main() {
    int n;
    double Hn = 0.0;

    printf("Digite um numero inteiro n (n >= 1): ");
    scanf("%d", &n);

    if (n >= 1) {
        for (int i = 1; i <= n; i++) {
            Hn += 1.0 / i;
    }

        printf("O valor de H%d (numero harmonico) e: %.6f\n", n, Hn);
    }else{
        printf("Por favor, digite um numero maior ou igual a 1.\n");
    }
    
    return 0;
}