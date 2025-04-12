/* 
    Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida, 
    calcule e mostre o número formado pelos dígitos invertidos do número lido. Exemplo: 
    Número lido = 123 Número gerado = 321
*/

#include <stdio.h>

int main () {

    int x, unidade, dezena, centena; 
    
    printf("Digite um numero de tres digitos: ");
    scanf("%d", &x);

    unidade = x % 10;
    dezena = (x % 100)  / 10;
    centena = (int) x / 100;


    printf("Unidade: %d\n", unidade);
    printf("Dezena: %d\n", dezena);
    printf("Centena: %d\n", centena);

    x = unidade * 100 + dezena * 10 + centena;

    printf("Numero invertido: %d", x);

}