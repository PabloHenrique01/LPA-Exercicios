/* 
    Faça um programa que converta uma letra maiúscula em letra minúscula. Use a 
    tabela ASCII para isso. 
*/

#include <stdio.h>

char x;

int main() {

    printf("Digite uma letra maiuscula: ");
    scanf("%c", &x);

    printf("Letra minuscula = %c", x + 32);

    return 0;
}