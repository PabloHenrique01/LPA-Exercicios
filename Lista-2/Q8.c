/*
    Leia um valor que represente uma temperatura em graus Celsius e apresente-a 
    convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo 
    F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/

#include <stdio.h>

int main() {

    int temp;

    printf("Insira uma temperatura em Graus Celsius: ");
    scanf("%d", &temp);

    printf("A temperatura convertida em Fahrenheit é de: %0.f", temp * 1.8 + 32);

    return 0;
}