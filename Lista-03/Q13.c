/*
    Faça um programa que mostre ao usuário um menu com quatro opções de 
    operações matemáticas (as operações básicas, por exemplo). O usuário escolhe 
    uma das opções, e o seu programa pede dois valores numéricos e realiza a 
    operação, mostrando o resultado. 

*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int opc;
    float num1, num2, result;

    printf("Calculadora Simples \n");
    printf("Escolha uma operacao:\n 1- Soma\n 2- Subtracao\n 3- Multiplicacao\n 4- Divisao\n");
    printf("Opcao: ");
    scanf("%d", &opc);

    if (opc < 1 || opc > 4) {
        printf("Escolha uma das opcoes sugeridas.");
        return -1;
    }

    printf("Digite o primeiro termo: ");
    scanf("%f", &num1);
    printf("Digite o segundo termo: ");
    scanf("%f", &num2);

    switch (opc) {
        case 1: 
        result = num1 + num2;
        printf("A soma dos termos e igual a: %.2f", result);
        break;

        case 2:
        result = num1 - num2;
        printf("A subtracao dos termos e igual a: %.2f", result);
        break;

        case 3:
        result = num1 * num2;
        printf("A multiplicacao dos termo e igual a: %.2f", result);
        break;

        case 4:
        result = num1 / num2;
        if (num1 == 0|| num2 == 0) {
            printf("A divisao por 0 e inviavel.");
        } else {
            printf("O Resultado da divisao dos termos e: %.2f", result);
        }
        break;
    }

    return 0;
}