/*
    Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, 
    imprima o valor correspondente em dólares. 
*/

#include <stdio.h>

int main() {
   
    float valorReal, valorDolar;

    printf("Bem vindo ao conversor de dolar. \n\nInsira o valor em reais no qual voce deseja converter: ");
    scanf("%f", &valorReal);

    printf("Agora insira o valor da cotacao atual do Dolar: ");
    scanf("%f", &valorDolar);

    printf("O valor de real para dolar e de: %.2f", valorReal / valorDolar);

    return 0;
}