/*
    Escreva um programa que, dada a idade de um nadador, classifique-o em uma das 
    seguintes categorias:

    Infantil A          5-7
    Infantil B          8-10
    Juvenil A           11-13
    Juvenil B           14-17
    Sênior              +18
*/

#include <stdio.h>

int main() {
    
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7) {
        printf("Sua categoria e Infantil A");
    } else if (idade >= 8 && idade <= 10) {
        printf("Sua categoria e Infantil B");
    } else if (idade >= 11 && idade <= 13) {
        printf("Sua categoria e Juvenil A");
    } else if (idade >= 14 && idade <= 17) {
        printf("Sua categoria e Juvenil B");
    } else if (idade > 18) {
        printf("Sua categoria e Senior");
    } else {
        printf("ERRO: Voce e novo demais para se inscrever !!");
    }

    return 0;
}