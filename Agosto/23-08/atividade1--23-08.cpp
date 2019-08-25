#include <stdio.h>
#include <stdlib.h>

int main (){
	int a, b;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &a);
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &b);
	
	if(a>b){
		printf("O valor %d, e  maior que %d\n", a, b);
	} else if(a<b){
		printf("O valor %d, e  maior que %d\n", b, a);
	} else if( a == b){
		printf("Os valores sao iguais\n");
	}
	
	system("pause");
}
