/*
    Faça um programa que leia os coeficientes de uma equação do segundo grau. Em 
    seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são 
    calculadas como
    em que ∆ = b2 – 4 * a * c e ax2 + bx + c = 0 representa uma equação do segundo grau.  
    A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensagem “Não 
    é equação de segundo grau”. Do contrário, imprima: 
    • Se ∆ < 0, não existe real. Imprima a mensagem “Não existe raiz”. 
    • Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”. 
    • Se ∆ > 0, existem duas raízes reais. Imprima as raízes.
*/

#include <stdio.h>
#include <math.h>

int main() {
    
    float a, b, c, x1,x2, delta;

    printf("Insira o primeiro termo (a) : ");
    scanf("%f",&a);

    if (a < 0) {
        printf("Nao e uma equacao do segundo grau");
        return -1;
    }

    printf("Insira o segundo termo (b): ");
    scanf("%f",&b);
    printf("Insira o terceiro termo (c): ");
    scanf("%f",&c);

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Nao existe raiz.");
    } else if (delta == 0) {
        x1 = (-b) / (2 * a);
        printf("Raiz unica: %.0f", x1);
    } else if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raizes: \nx1: %.0f\nx2: %.0f", x1, x2);
    }

    return 0;
}



