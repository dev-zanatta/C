#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd_dias;
    printf("Insira a quantidade de dias sem acidente de trabalho:\n");
    scanf("%d", &qtd_dias);
    int ano=qtd_dias/360;
    qtd_dias-=ano*360;
    int mes=qtd_dias/30;
    qtd_dias-=mes*30;
    int dias=qtd_dias;
    printf("O tempo e de %d anos, %d meses e %d dias.\n", ano, mes, dias);
    return 0;
}
