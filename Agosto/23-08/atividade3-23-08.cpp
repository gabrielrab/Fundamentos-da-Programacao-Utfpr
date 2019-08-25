#include <stdio.h>
#include <stdlib.h>

int main (){
	int numero;
	
	printf("Digite o numero: ");
	scanf("%d", &numero);
	
	if(numero <= 10){
		printf("F1\n");
	} else if(numero > 10 && numero <= 100){
		printf("F2\n");
	} else if(numero > 100){
		printf("F3\n");
	}
	
	
	
	system("pause");
}
