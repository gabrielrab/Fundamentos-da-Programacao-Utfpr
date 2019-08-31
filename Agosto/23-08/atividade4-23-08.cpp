#include <stdio.h>
#include <stdlib.h>

int main (){
	float n1, n2, n3, _result;
	
	printf("Digite a nota 1: ");
	scanf("%f", &n1);
	
	printf("Digite a nota 2: ");
	scanf("%f", &n2);
	
	printf("Digite a nota 3: ");
	scanf("%f", &n3);
	
	_result = (n1*2)+(n2*3)+(n3*5)/10;
	
	if(_result >= 7){
		printf("Sua media e: %.2f\nParabens voce foi aprovado.\n", _result);
	} else{
		printf("Sua media e: %.2f\nVoce foi reprovado.\n", _result);
	}
	
	system("pause");
}
