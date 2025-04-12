/* 
    A importância de R$ 780.000,00 será dividida entre três ganhadores de um 
    concurso, sendo que: 
    i. O primeiro ganhador receberá 46% do total. 
    ii. O segundo receberá 32% do total.  
    iii. O terceiro receberá o restante. 
    Calcule e imprima a quantia recebida por cada um dos ganhadores. 
*/

#include <stdio.h>

int main() {
    
    float b1 = 780000 * 0.46;
    float b2 = 780000 * 0.32;
    float b3 = 780000 * 0.22;

    printf("O primeiro beneficiado recebera: %.0f \n", b1);
    printf("O primeiro beneficiado recebera: %.0f \n", b2);
    printf("O primeiro beneficiado recebera: %.0f", b3);
    
    return 0;
}