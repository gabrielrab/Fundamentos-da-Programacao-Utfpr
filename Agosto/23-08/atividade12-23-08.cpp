#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Crie um algoritmo que peça o nome, a altura e o peso de duas pessoas
//e apresente o nome da mais pesada e o nome da mais alta.

int main(){
	
	struct _pessoa{
		char nome[100];
		float altura;
		float peso;
	};	
	
	struct _pessoa pessoa[2];
	
	
	for(int i=0; i<=1; i++){
		printf("\nDigite o nome da %d pessoa: ", i+1);
		gets(pessoa[i].nome);
		fflush(stdin);
		printf("Digite a altura da %d pessoa: ", i+1);
		scanf("%f", &pessoa[i].altura);
		printf("Digite a peso da %d pessoa: ", i+1);
		scanf("%f", &pessoa[i].peso);
		fflush(stdin);
	}
	
	if(pessoa[0].peso > pessoa[1].peso){
		printf("O(a) %s e o(a) mais pesado(a)!", pessoa[0].nome);
	} else{
		printf("O(a) %s e o(a) mais pesado(a)!", pessoa[1].nome);
	}
	
	if(pessoa[0].altura > pessoa[1].altura){
		printf("\nO(a) %s e o(a) mais alto(a)!", pessoa[0].nome);
	} else{
		printf("O(a) %s e o(a) mais alto(a)!\n", pessoa[1].nome);
	}
	
	system("pause");	
}
