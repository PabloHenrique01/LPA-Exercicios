/*
    Faça um programa que informe o mês de acordo com o número digitado pelo 
    usuário. Exemplo: Entrada = 4. Saída = Abril. 
*/

#include <stdio.h>

int main() {

    int num;

    printf("Digite o numero para saber um mes: ");
    scanf("%d", &num);

    switch(num) {

        case 1:
        printf("Janeiro");
        break;

        case 2:
        printf("Fevereiro");
        break;

        case 3:
        printf("Março");
        break;

        case 4:
        printf("Abril");
        break;

        case 5:
        printf("Maio");
        break;

        case 6:
        printf("Junho");
        break;

        case 7:
        printf("Julho");
        break;

        case 8:
        printf("Agosto");
        break;

        case 9:
        printf("Setembro");
        break;

        case 10:
        printf("Outubro");
        break;

        case 11:
        printf("Novembro");
        break;

        case 12:
        printf("Dezembro");
        break;

        default:
        printf("O numero so pode variar entre 1 e 12!");
    }

    return 0;
}