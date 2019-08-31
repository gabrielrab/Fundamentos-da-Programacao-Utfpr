# include <stdio.h>
# include <stdlib.h>
# include <math.h>

//Construa um algoritimo que calcule a quantidade de latas de tinta necess�rias e o custo para pintar
//tanques cilindricos de combustivel em que s�o fornecidos a altura e o raio deste cilindro sabendo que:
// - a lata de tinta custa 50,00
// - cada lata cont�m 5 litros
// - cada livro de tinta pinta 3 metros quadrados
// 
// dados da entrada: altura e raio
// utilizando o planejamento reverso sabemos que:
//  - custo � dado por quantidade de latas * 50;
//  - quantidade de latas � dado pela quantidade total de litros / 5;
//  - quantidade total de litros � dado por area do cilindro / 3;
//  - area do cilindro � dado por area da base + area lateral;
//  - area da base � PI * raio * raio;
//  - area lateral � a altura * comprimento = 2 * PI * raio * altura;
//  sendo que o raio e altura da entrada e pi um valor constante de 3,14; 

int main(){
	
	float latas_tintas, altura, raio, area_total, custo;
	float pi = 3.14;
	
	printf("Digite o raio do cilindro: ");
	scanf("%f", &raio);
	
	printf("\nDigite a altura do cilindro: ");
	scanf("%f", &altura);
	
	area_total = 2 * pi * raio * altura * raio * raio * pi;
	latas_tintas = 	area_total / (3*5);
	custo = latas_tintas * 50;
	
	printf("\n------------------------------------------");
	printf("\nO custo sera de aproximadamente: R$%.2f", custo);
	printf("\nLatas de tinta: %.2f", ceil(latas_tintas));
	printf("\nArea do cilindro: %.2f\n", ceil(area_total));
	printf("------------------------------------------\n");
	
	system("pause");
}
