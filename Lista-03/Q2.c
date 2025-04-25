/*
    Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os
    dois números forem iguais, imprima a mensagem “Números iguais”.
*/
#include <stdio.h>

int main (){

    float a,b;

    printf("Digite um numero:\n");
    scanf("%f", &a);
    printf("Digite um segundo numero:\n");
    scanf("%f", &b);

    if (a > b)
    {
        printf("%.2f e maior que %.2f", a,b);
    }
    
    else{
        if (a == b)
        {
            printf("%.2f e igual a %.2f", a,b);
        }
        
        else{
            printf("%.2f e maior que %.2f", b,a);
        }
    }
}