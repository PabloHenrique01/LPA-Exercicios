/*
    Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre 
    seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura): 
    • Homens: (72,7 * h) – 58 
    • Mulheres: (62,1 * h) – 44,7
*/

#include <stdio.h>

int main() {
    
    float peso, altura;
    char sexo;

    printf("Digite o seu sexo (M ou F): ");
    sexo = getchar();

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    if(sexo == 'M' || sexo =='m') {
        peso = (72.7 * altura) - 58;
        printf("O seu peso ideal e: %.2f", peso);
    } else if(sexo == 'F' || sexo == 'f') {
        peso = (62.1 * altura) - 44.7;
        printf("O seu peso ideal e: %.2f", peso);
    } else {
        printf("ERRO: Voce errou a sintaxe da respota!");
    }

    return 0;
}