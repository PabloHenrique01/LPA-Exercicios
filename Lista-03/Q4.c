/*
    Faça um programa que leia o salário de um trabalhador e o valor da prestação de
    um empréstimo. Se a prestação:
    • For maior que 20% do salário, imprima: “Empréstimo não concedido.”
    • Caso contrário, imprima: “Empréstimo concedido.”
*/

#include <stdio.h>

    float slr, emp, vprest; 
    int prest;

int main (){

    printf("Por favor, digite o valor de seu salario:\n");
    scanf("%f", &slr);
    printf("Agora, digite o valor do emprestimo:\n");
    scanf("%f", &emp);
    printf("Em quantas prestacoes?\n");
    scanf("%d", &prest);

    vprest = emp / prest;

    if ( vprest > slr * 0.2)
    {
        printf("Emprestimo nao concedido.");
    }
    else{
        printf("Emprestimo concecido.");
    }
}