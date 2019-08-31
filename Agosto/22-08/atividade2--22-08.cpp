#include <stdio.h>
#include <stdlib.h>

main(){
	int a, b, c;
	
	printf("Valor de A: ");
	scanf("%d", &a);
	
	printf("Valor de B: ");
	scanf("%d", &b);
	
	c = a;
	a = b;
	b = c;
	
	printf("Valor de A: %d - Valor de B: %d\n", a, b);
		
	system("pause");
}
