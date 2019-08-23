#include <stdio.h>
#include <stdlib.h>

main(){
	int dias;
	float anos, r_ano, r_meses, meses, r_dias;
	
	printf("Digite sua idade em dias: ");
	scanf("%d", &dias);
	
	anos = dias / 365;
	meses = (dias % 365) / 30;
	r_dias = (dias % 365) % 30;
	
	printf("\nResultado:\nEm anos: %.2f\nEm meses: %.2f\nEm dias: %.2f\n", anos, meses, r_dias);
	
	system("pause");
}
