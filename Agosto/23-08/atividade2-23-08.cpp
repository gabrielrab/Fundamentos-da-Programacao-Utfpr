#include <stdio.h>
#include <stdlib.h>

int main (){
	int conta, tipo_operacao;
	float saldo,valor_operacao;
	
	printf("Digite o numero da sua conta: ");
	scanf("%d", &conta);
	
	printf("Digite o saldo da sua conta: ");
	scanf("%f", &saldo);
	
	system("cls");
	
	printf("Selecione o tipo de operacao:\n\t<1>Deposito\n\t<2>Retirada\nSua opcao: ");
	scanf("%d", &tipo_operacao);
	
	printf("Digite o valor da operacao: ");
	scanf("%f", &valor_operacao);
	
	switch (tipo_operacao){
		case 1: 
			system("cls");
			saldo = saldo + valor_operacao;
			printf("\t---- Deposito ----\n\t--------------\nSeu saldo e de: %.2f\n", saldo);
			if(saldo<0){
				printf("Sua conta esta negativa\n");
			}
		break;
		
		case 2: 
			system("cls");
			saldo = saldo - valor_operacao;
			printf("\t---- Retirada ----\n\t--------------\nSeu saldo e de: %.2f\n", saldo);
			if(saldo<0){
				printf("Sua conta esta negativa\n");
			}
		break;
		default:
			printf("Opcao selecionada invalida\n");
		break;		
	}
	
	system("pause");
}
