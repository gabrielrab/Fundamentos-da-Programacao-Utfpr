#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível (codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor
//a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 3,30 e o preço do litro do álcool é R$ 2,90.

int main (){
    char optn;
    int litros;
    float valor_total;

    printf("Digite a quantidade de litros de combustivel: ");
    scanf("%d", &litros);

    printf("Digite o tipo de combustivel:\n<A> - Alcool\n<G> - Gasolina\nEscolha: ");
    scanf("%c", &optn);

    switch (optn){
    case "A":
        if(litros<=20){
            valor_total = litros*2.813;
            printf("Valor total: %.2f", valor_total);
        } else{
            valor_total = litros*(2.9 * 0.05);
            printf("Valor total: %.2f", valor_total);
        }
    break;
    case "G":
        if(litros<=20){
            valor_total = litros*(3.3*0.04);
            printf("Valor total: %.2f", valor_total);
        } else{
            valor_total = litros*(3.3 * 0.06);
            printf("Valor total: %.2f", valor_total);
        }
    break;
    default:
        printf("Voce digitou um valor inválido");

    }

	return 0;
}
