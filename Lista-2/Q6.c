/*
    Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em 
    m/s (metros por segundo). A fórmula de conversão é M = K/3.6, sendo K a velocidade em 
    km/h e M em m/s.
*/

#include <stdio.h>

int main() {

    float veloKm;
    
    printf("Insira a velocidade em km/h: ");
    scanf("%f", &veloKm);

    printf("A velocidade convertida em m/s e de: %.2f", veloKm / 3.6);

    return 0;
}