#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco_gas=0;
    float valor=0;
    printf("Insira o preco da gasolina:\n");
    scanf("%f", &preco_gas);
    printf("Insira o valor a ser colocado de gasolina:\n");
    scanf("%f", &valor);
    printf("A quantidade de litros que sera colocada com RS%.2f sera de %.2f litros.\n", valor, valor/preco_gas);
    return 0;
}
