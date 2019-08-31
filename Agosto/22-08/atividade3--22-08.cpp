#include <stdio.h>
#include <stdlib.h>

int main (){
	float comprimento, largura, altura, volume;
	
	printf("Digite o comprimento: ");
	scanf("%f", &comprimento);
	
	printf("\nDigite a largura: ");
	scanf("%f", &largura);
	
	printf("\nDigite a altura: ");
	scanf("%f", &altura);
	
	volume = comprimento * largura * altura;
	
	printf("\nO volume e: %.2f", volume);
	
	system("pause");
}
