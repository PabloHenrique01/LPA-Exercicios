/*
     Faça um programa para verificar se determinado número inteiro lido é divisível por 
    3 ou 5, mas não simultaneamente pelos dois. 
*/

#include <stdio.h>

int main() {

    int x;

    printf("Digite um numero que deseja fazer a verificacao: ");
    scanf("%d", &x);

    if(x % 3 == 0 && x % 5 == 0) {
        printf("O numero e divisivel por 3 e 5");
    } else if (x % 3 == 0 || x % 5 == 0) {
        printf("O numero e divisivel por 3 ou por 5");
    } else {
        printf("O numero nao e divisivel nem por 3 nem por 5");
    }

    return 0;
}