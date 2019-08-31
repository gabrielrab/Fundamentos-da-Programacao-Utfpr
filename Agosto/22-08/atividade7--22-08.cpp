#include <stdio.h>
#include <stdlib.h>

main(){
	float distancia, consumo, _result;
	
	printf("Digite a distncia em kilometros: ");
	scanf("%f", &distancia);
	
	printf("\nDigite a quantidade de combustivel gasto: ");
	scanf("%f", &consumo);
	
	_result = distancia / consumo;
	
	printf("Sua media e: %.2f\n", _result);
	
	system("pause");
}
