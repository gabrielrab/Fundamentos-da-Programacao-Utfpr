#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Ler o nome de 2 times e o número de gols marcados na partida (para cada time). Escrever o nome do vencedor.
//Caso não haja vencedor deverá ser impressa a palavra EMPATE.

int main (){
    char time1[100], time2[200];
    int p1, p2;

    printf("Digite o nome do time1: ");
    gets(time1);
    fflush(stdin);

    printf("Digite o nome do time2: ");
    gets(time2);
    fflush(stdin);

    printf("Quantidade de Gols time1: ");
    scanf("%d", &p1);

    printf("Quantidade de Gols time2: ");
    scanf("%d", &p2);

    if(p1> p2){
        printf("O time %s e o vencedor\n", time1);
    } else if(p2>p1){
        printf("O time %s e o vencedor\n", time2);
    } else{
        printf("O jogo deu EMPATE");
    }



	return 0;
}
