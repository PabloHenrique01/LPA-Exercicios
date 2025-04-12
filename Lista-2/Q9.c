/*
    Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de 
    conversão é R = G * π/180, sendo G o ângulo em graus e R em radianos e π = 3.141592.
*/

#include <stdio.h>

int main() {

    int anguloG;

    printf("Digite o valor do angulo para a conversao em radianos: ");
    scanf("%d", &anguloG);

    printf("O angulo convertido resulta no numero: %.4f", anguloG * 3.141592 / 180);
}