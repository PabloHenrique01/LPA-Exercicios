/*
    5) Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
    • O número digitado ao quadrado.
    • A raiz quadrada do número digitado.
*/

#include <stdio.h> 
#include <math.h>

int main(){

    int x,qd;
    float rz;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &x);
    qd = pow(x,2);
    rz = sqrt(x);
    
    if (x < 0)
    {
        printf("\nNumero negativo");
    }
    else{
        printf("\nValores encontrados:\n- %d ao quadrado: %d\n- Raiz quadrada de %d: %.2f", x, qd, x, rz);
    }
}