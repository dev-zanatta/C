#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas_tr=0;
    int horas_ext=0;

    printf("Insira a quantidade de horas trabalhadas e logo apos insira a quantidade de horas extras:\n");
    scanf("%d %d", &horas_tr, &horas_ext);
    int salario = horas_tr*10 + horas_ext*15;
    printf("O salario bruto e de %d ", salario);
    salario*=0.9;
    printf(" e o salario liquido e de %d", salario);
    return 0;
}
