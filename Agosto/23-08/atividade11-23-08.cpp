#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Faça um algoritmo que leia um número inteiro e mostre uma mensagem
//indicando se este número é par ou ímpar e se é positivo ou negativo.


int main(){
	int a;
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	
	if(a<0 && a%2 == 0){
		printf("O numero %d e negativo e tambem par!\n", a);
	} else if(a>0 && a%2 == 0){
		printf("O numero %d e positivo e tambem par!\n", a);
	} else if(a<0 && a%2 != 0){
		printf("O numero %d e negativo e tambem impar!\n", a);
	} else if(a>0 && a%2 != 0){
		printf("O numero %d e positivo e tambem impar!\n", a);
	} else if(a == 0){
		printf("Voce digitou 0. Zero e um valor nulo\n", a);
	} 
	
	system("pause");	
}
