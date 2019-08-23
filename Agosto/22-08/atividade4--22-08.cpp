#include <stdio.h>
#include <stdlib.h>

main(){
	float real, dollar, _result;
	
	printf("Digite o valor atual da cotacao atual do dollar: ");
	scanf("%f", &dollar);
	
	printf("\nDigite o valor em real a ser convertido para dollar: ");
	scanf("%f", &real);
	
	_result = real * dollar;
	
	printf("\nO valor convertido e: %.2f\n", _result);
	
	system("pause");
}
