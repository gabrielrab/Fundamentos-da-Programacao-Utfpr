#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Uma empresa de vendas tem três corretores. A empresa paga ao
//corretor uma comissão calculada de acordo com o valor de suas vendas.
//Se o valor da venda de um corretor for maior que R$ 50.000.00 a
//comissão será de 12% do valor vendido. Se o valor da venda do corretor
//estiver entre R$ 30.000.00 e R$ 50.000.00 (incluindo extremos) a
//comissão será de 9.5%. Em qualquer outro caso, a comissão será de
//7%. Escreva um algoritmo que gere uma saída contendo nome, valor da
//venda e comissão de cada um dos corretores. Mostrar também o total
//de vendas da empresa.

float calculaComissao (float venda){
	float comissao;
	
	if(venda > 50000){
		comissao = venda*0.12;
	} else if(venda >= 30000 && venda <= 50000){
		comissao = venda*0.095;
	} else{
		comissao = venda * 0.07;
	}
	
	return comissao;
} 

int main(){
	char cor1[100], cor2[100], cor3[100];
	float ven_cor1, ven_cor2, ven_cor3, total_empresa, _comissao;
	
	printf("Nome do corretor 1: ");
	gets(cor1);
	printf("Valor da venda do corretor 1: ");
	scanf("%f", &ven_cor1);
	
	fflush(stdin);
	
	printf("Nome do corretor 2: ");
	gets(cor2);
	printf("Valor da venda do corretor 2: ");
	scanf("%f", &ven_cor2);
	
	fflush(stdin);
	
	printf("Nome do corretor 3: ");
	gets(cor3);
	printf("Valor da venda do corretor 3: ");
	scanf("%f", &ven_cor3);
	
	fflush(stdin);
	system("cls");
	
	//Saidas
	//Corretor 1
	_comissao = calculaComissao(ven_cor1);
	total_empresa = _comissao;
	printf("Corretor 1:\nNome: %s\nVenda: %.2f\nComissao: %.2f\n\n", cor1, ven_cor1, _comissao);

	//Corretor 2
	_comissao = calculaComissao(ven_cor2);
	total_empresa = total_empresa + _comissao;
	printf("Corretor 2:\nNome: %s\nVenda: %.2f\nComissao: %.2f\n\n", cor2, ven_cor2, _comissao);
	
	//Corretor 3
	_comissao = calculaComissao(ven_cor2);
	total_empresa = total_empresa + _comissao;
	printf("Corretor 3:\nNome: %s\nVenda: %.2f\nComissao: %.2f\n\n", cor3, ven_cor3, _comissao);	
	
	printf("Total da empresa: %.2f\n", total_empresa);
	system("pause");
	
}
