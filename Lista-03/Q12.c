/*
    Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 e 
    imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1, 
    segunda-feira, se 2, e assim por diante. 
*/

#include <stdio.h>

int main() {

    int d;

    printf("Digie um numero para saber o dia da semana: ");
    scanf("%d", &d);

    switch(d) {

        case 1:
        printf("Domingo");
        break;

        case 2:
        printf("Segunda");
        break;

        case 3:
        printf("Terça");
        break;

        case 4:
        printf("Quarta");
        break;

        case 5:
        printf("Quinta");
        break;

        case 6:
        printf("Sexta");
        break;

        case 7:
        printf("Sabado");
        break;

        default: 
        printf("O numero so pode variar entre 1 e 7!");
    }

    return 0;
}