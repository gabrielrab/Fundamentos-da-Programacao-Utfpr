#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Faça um algoritmo que leia os valores A, B e C. Mostre uma mensagem
//que informe se a soma de A com B é menor, maior ou igual a C.


int main(){
	int a, b,c, soma;
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	
	printf("Digite o valor de C: ");
	scanf("%d", &c);
	
	soma = a+b;
	
	if(soma > c){
		printf("A soma de A e B e maior que C\n");
	} else if (soma < c){
		printf("A soma de A e B e menor que C\n");
	} else if (soma == c){
		printf("A soma de A e B e igual a C\n");
	}
	
	system("pause");	
}
