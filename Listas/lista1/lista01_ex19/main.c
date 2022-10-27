#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd_frangos=0;
    printf("Insira a quantidade de frangos:\n");
    scanf("%d", &qtd_frangos);
    int gasto = qtd_frangos*4 + qtd_frangos*3.5*2;
    printf("A granja gastara RS%d para marcar todos os frangos ", gasto);
    return 0;
}
