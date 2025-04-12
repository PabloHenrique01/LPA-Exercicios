/*
    Leia o valor do raio de um círculo. Calcule e imprima a área do círculo 
    correspondente. A área do círculo é A = π* raio2, sendo π = 3.141592.
*/

#include <stdio.h>

int main() {
    
    float raioCirculo;

    printf("Digite o valor do raio de um circulo: ");
    scanf("%f", &raioCirculo);

    printf("A area do circulo e: %.2f", 3.141592 * raioCirculo * raioCirculo);

    return 0;
}