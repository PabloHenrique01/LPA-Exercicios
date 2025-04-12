/*
    Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.
*/

#include <stdio.h>

int main() {
    
    float w, x, y, z;

    printf("Insira o primeiro numero float: ");
    scanf("%f", &w);
    printf("Insira o segundo numero float: ");
    scanf("%f", &x);
    printf("Insira o terceiro numero float: ");
    scanf("%f", &y);
    printf("Insira o quarto numero float: ");
    scanf("%f", &z);

    printf("A media dos numeros inseridos e: %.2f", (w+x+y+z) / 4);
    
    return 0;
}