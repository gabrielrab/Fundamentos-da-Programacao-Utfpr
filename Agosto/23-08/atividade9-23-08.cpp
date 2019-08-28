#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Suponha que o conceito de um aluno seja determinado em função da
//sua nota. Suponha, também, que esta nota seja um valor inteiro na faixa
//de 0 a 100, conforme a seguinte faixa:
//
//Nota Conceito
//0 a 49 Insuficiente
//50 a 64 Regular
//65 a 84 Bom
//85 a 100 Ótimo
//Crie um algoritmo que tendo como dado de entrada a média de um
//aluno apresente o conceito e a nota do aluno.


int main(){
	int conceito;
	
	printf("Digite o conceito do aluno: ");
	scanf("%d", &conceito);
	
	if(conceito >= 0 && conceito <=49 ){
		printf(" - Conceito: Insuficiente\n");
	} else if(conceito >= 50 && conceito <=64){
		printf(" - Conceito: Regular\n");
	} else if(conceito >= 65 && conceito <=84){
		printf(" - Conceito: Bom\n");
	} else if(conceito >= 85 && conceito <=100){
		printf(" - Conceito: Otimo\n");
	}
	
	system("pause");	
}
