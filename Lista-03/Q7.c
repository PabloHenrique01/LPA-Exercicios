/*
    Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado 
    possui uma taxa diferente de imposto sobre o produto. Faça um programa em que 
    o usuário entre com o valor e o estado de destino do produto e o programa retorne 
    o preço final do produto acrescido do imposto do estado em que ele será vendido. 
    Se o estado digitado não for válido, mostrará uma mensagem de erro.
    
    MG: 7%
    SP: 12%
    RJ: 15%
    MS: 8%
*/

#include <stdio.h>
#include <string.h>

int main() {

    float valor;
    char uf[3];

    printf("Digite o valor de seu produto: ");
    scanf("%f", &valor);

    printf("Digite a cidade destino (Exemplo: SP, DF, MS...): ");
    scanf("%s", uf);


    if (strcmp(uf, "MG") == 0) { 
        valor = valor + (valor * 0.07);
        printf("O valor final de seu produto ficou em: R$ %.2f", valor);
    } else if (strcmp(uf, "SP") == 0) {
        valor = valor + (valor * 0.12);
        printf("O valor final de seu produto ficou em: R$ %.2f", valor);
    } else if (strcmp(uf, "RJ") == 0) {
        valor = valor + (valor * 0.15);
        printf("O valor final de seu produto ficou em: R$ %.2f", valor);
    } else if (strcmp(uf, "MS") == 0) {
        valor = valor + (valor * 0.08);
        printf("O valor final de seu produto ficou em: R$ %.2f", valor);
    } else {
        printf("ERRO: Voce digitou incorretamente o estado, coloque em letra maiuscula e apenas a UF.");
    }


    return 0;
}