/*
    Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro. O 
    volume de um cilindro circular é calculado por meio da seguinte fórmula: 
    em que π = 3.141592 
*/

#include <stdio.h>

int main() {

    int h, r;

    printf("Insira a altura do cilindro: ");
    scanf("%d", &h);
    printf("Insira o raio do cilindro: ");
    scanf("%d", &r);

    printf("O cilindro possui o volume de: %.2f", 3.141592 * r * r * h);

    return 0;
}