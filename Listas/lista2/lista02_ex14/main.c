#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano=0;
    float valor=0, imposto=0;
    printf("Insira o ano e o valor do carro:\n");
    scanf("%d %f", &ano, &valor);
    if(ano<=1990)
    {
        imposto=0.01*valor;
    }
    else
        imposto=0.015*valor;
    printf("O imposto e de %.2f", imposto);
    return 0;
}
