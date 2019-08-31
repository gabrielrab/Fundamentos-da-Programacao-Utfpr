#include <stdio.h>
#include <stdlib.h>

main(){
	int a, b,c, _result;
	
	printf("Digite o 1 valor: ");
	scanf("%d", &a);
	
	printf("\nDigite o 2 valor: ");
	scanf("%d", &b);
	
	printf("\nDigite o 3 valor: ");
	scanf("%d", &c);
	
	_result = (a+b+ abs(a-b)) /2;
	_result = (_result + c + abs(_result - c))/2;
	
	printf("O maior valor: %d\n", _result);

//	Em if fica mais bonito	
//	if(a>b && a> c){
//		printf("O maior valor e: %d\n", a);
//	} else if (b>a && b>c){
//		printf("O maior valor e: %d\n", b);
//	} else if (c>a && c>b){
//		printf("O maior valor e: %d\n", c);
//	}
	
	system("pause");
}
