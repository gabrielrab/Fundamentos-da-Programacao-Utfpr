#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//As ma��s custam R$ 1,30 cada se forem compradas menos de uma
//d�zia, e R$ 1,00 se forem compradas pelo menos 12. Escreva um
//programa que leia o n�mero de ma��s compradas, calcule e escreva o
//custo total da compra

int main(){
	int quantidade;
	float resultado;
	
	printf("Digite a quantidade de macas compradas: ");
	scanf("%d", &quantidade);
	
	if(quantidade<6 || quantidade < 12){
		resultado = quantidade*1.3;
	} else if(quantidade>=12){
		resultado = quantidade*1;
	}
	
	printf("Custo total da compra: %.2f\n", resultado);
	
	system("pause");	
}
