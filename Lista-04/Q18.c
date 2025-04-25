/*
    Faça um programa que receba um número inteiro maior do que 1 e verifique se
    o número fornecido é primo ou não.
*/

#include <stdio.h>

int main(){

    int num, div;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    for ( int t = 2, div = 0; t <= num + 1; t++ ){

    div = num % t;
    

    if ( div == 0)
    {
        printf("Numero nao e primo.");
        break;
    }
    else  
    {
        printf("numero primo");
        break;
    }
    }

}