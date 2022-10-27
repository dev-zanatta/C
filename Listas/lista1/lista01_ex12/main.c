#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario=0;
    printf("Insira o salario:\n");
    scanf("%f", &salario);
    printf("Salario normal:%.2f\n", salario);
    salario*=1.15;
    printf("Salario apos aumento:%.2f\n", salario);
    salario*=0.92;
    printf("Salario apos desconto dos impostos:%.2f", salario);
    return 0;
}
