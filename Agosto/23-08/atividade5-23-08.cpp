#include <stdio.h>
#include <stdlib.h>

//Construa um algoritmo que receba como entrada três valores e os
//imprima em ordem crescente.

int main (){
	int n1, n2, n3;
	
	printf("Digite a nota 1: ");
	scanf("%d", &n1);
	
	printf("Digite a nota 2: ");
	scanf("%d", &n2);
	
	printf("Digite a nota 3: ");
	scanf("%d", &n3);
	
	if(n1 > n2 && n1 > n3){
		printf("O numero %d e o maior.\n", n1);
		if(n2>n3){
			printf("A ordem e %d, %d, %d\n", n3, n2, n1);
		} else{
			printf("A ordem e %d, %d, %d\n", n2, n3, n1);
		}
		
	} else if(n2 > n1 && n2 > n3){
		printf("O numero %d e o maior.\n", n2);
		if(n1>n3){
			printf("A ordem e %d, %d, %d\n", n3, n1, n2);
		} else{
			printf("A ordem e %d, %d, %d\n", n1, n3, n2);
		}
		
	} else if(n3 > n1 && n3 > n2){
		printf("O numero %d e o maior.\n", n3);
		if(n1>n2){
			printf("A ordem e %d, %d, %d\n", n2, n1, n3);
		} else{
			printf("A ordem e %d, %d, %d\n", n1, n2, n3);
		}
		
	}
	
	system("pause");
}
