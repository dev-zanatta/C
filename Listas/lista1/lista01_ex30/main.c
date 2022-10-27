#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario=0;
    float valor_vendas=0;
    printf("Insira o salario e o valor total das vendas:\n");
    scanf("%f %f", &salario, &valor_vendas);
    printf("A comissao e de %.2f e o salario apos o acrescimo da comissao e de %.2f", valor_vendas*0.04, salario+valor_vendas*0.04);
    return 0;
}
