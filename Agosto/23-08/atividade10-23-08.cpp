#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Elaborar um algoritmo que l� dois valores a e b e os escreve com a
//mensagem: �S�o m�ltiplos� ou �N�o s�o m�ltiplos�.


int main(){
	int a, b;
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	
	if(a%b == 0 || b%a == 0){
		printf("Os numeros %d e %d sao multiplos!\n", a, b);
	} else{
		printf("Os numeros %d e %d nao sao multiplos!\n", a, b);
	}
	
	system("pause");	
}
