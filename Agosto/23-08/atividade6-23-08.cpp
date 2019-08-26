#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Considere que o �ltimo concurso vestibular apresentou tr�s provas:
//Portugu�s, Matem�tica e Conhecimentos Gerais. Considerando que
//para cada candidato tem-se um registro contendo o seu nome e as
//notas obtidas em cada uma das provas, construa um algoritmo que
//forne�a:
//a) o nome e as notas em cada prova do candidato
//b) a m�dia do candidato;
//calcule e escreva uma informa��o dizendo se o candidato foi aprovado
//ou n�o. Considere que um candidato � aprovado se sua m�dia for maior que
//7.0 e se n�o apresentou nenhuma nota abaixo de 5.0;

int main(){
	char nome[100];
	float mat, port, con_gerais, media;
	
	printf("Nome do Aluno: ");
	scanf("%s", &nome);
	
	fflush(stdin);
	
	printf("Nota de Portugues: ");
	scanf("%f", &port);
	
	printf("Nota de Matematica: ");
	scanf("%f", &mat);
	
	printf("Nota de Conhecimentos Gerais: ");
	scanf("%f", &con_gerais);
	
	system("cls");
	
	printf("Nome: %s\nNotas:\nPortugues: %.2f\nMatematica: %.2f\nConhecimentos Gerais: %.2f", nome, port, mat, con_gerais);
	
	media = (mat + port + con_gerais) / 3;
	
	if(mat < 5 || port < 5 || con_gerais < 5){
		printf("Sua media e: %.2f - Mas voce foi reprovado por ter nota menor que 5 -", media);
	} else if(media>7){
		printf("Sua media e: %.2f - Parabens voce foi aprovado!", media);
	} else{
		printf("Sua media e: %.2f - Mas voce foi reprovado.", media);
	}
	
}
