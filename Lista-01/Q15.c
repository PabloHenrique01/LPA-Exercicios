/* 
    Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-as 
    de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e uma 
    em cada linha.  Use um único comando printf() para cada operação de escrita das três 
    variáveis 
*/

#include <stdio.h>

int main() {

    char variavelUm;
    int variavelDois;
    float variavelTres;

    printf("Digite um caractere: ");
    scanf("%c", &variavelUm);

    printf("Digite um numero inteiro: ");
    scanf("%d", &variavelDois);

    printf("Digite um numero float: ");
    scanf("%f", &variavelTres);

    printf("Valores separados: %c %d %f \n", variavelUm, variavelDois, variavelTres);
    printf("Valores separados por tabulacao horizontal: \t%c \t%d \t%f \n", variavelUm, variavelDois, variavelTres);
    printf("Valores separados por linhas: \n%c \n%d \n%f \n", variavelUm, variavelDois, variavelTres);

    return 0;
}