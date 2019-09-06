#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario_hora, horas_trabalhadas, horas_extras, salario_hora_extra, salario_extra, salario_final;

    //Scns aqui
    printf("Digite o numero de horas trabalhadas por mes: ");
    scanf("%f", &horas_trabalhadas);

    printf("Digite o salario por hora de trabalho: ");
    scanf("%f", &salario_hora);

    //logica
    horas_extras = horas_trabalhadas - 160;
    salario_hora_extra = salario_hora * 1.5;
    salario_extra = salario_hora_extra*horas_extras;
    salario_final = (salario_hora_extra * horas_extras) + (160*salario_hora);

    //resultado
    printf("Salario: %.2f\nSalario das horas extras: %.2f\nSalario final: %.2f\n", 160*salario_hora, salario_extra, salario_final);

    return false;
}
