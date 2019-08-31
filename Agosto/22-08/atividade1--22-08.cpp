#include <stdio.h>
#include <stdlib.h>

int main(){
	float prestacao, tx_juros, resultado;
	int tempo;

	printf("Digite o valor da prestacao: ");
	scanf("%f", &prestacao);

	printf("Digite a taxa de juros: ");
	scanf("%f", &tx_juros);

	printf("Digite o tempo(em meses): ");
	scanf("%d", &tempo);

	resultado = prestacao+(prestacao*tx_juros/100)*tempo;
	printf("O resultado e: %.2f\n", resultado);

	system("pause");
}
