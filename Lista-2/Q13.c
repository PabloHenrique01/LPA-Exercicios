/*
    Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação: 
    Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa através da 
    fórmula dada. Imprima o resultado.
*/

#include <stdio.h>
#include <math.h>

int main() {

    int catA, catB;

    printf("Insira valor do cateto A: ");
    scanf("%d", &catA);
    printf("Insira o valor do cateto B: ");
    scanf("%d", &catB);

    float calc = pow(catA, 2) + pow(catB, 2);
    float h = sqrt(calc);
    

    printf("O valor da hipotenusa e: %.2f", h);

    return 0;
}