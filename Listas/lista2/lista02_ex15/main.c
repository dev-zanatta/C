#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    float salario=0;
    int cargo=0;
    printf("Insira o salario e o cargo do funcionario(Gerente(101), Engenheiro(102) ou Tecnico(103))\n");
    scanf("%f %d", &salario, &cargo);
    if(cargo==101)
        printf("O salario antigo era de %.2f, com um aumento de %.2f ficara %.2f", salario, 0.1*salario , salario*1.1);
    else if(cargo==102)
        printf("O salario antigo era de %.2f, com um aumento de %.2f ficara %.2f", salario, 0.2*salario, salario*1.2);
    else if(cargo==103)
        printf("O salario antigo era de %.2f, com um aumento de %.2f ficara %.2f", salario, 0.3*salario, salario*1.3);
    else
        printf("O salario antigo do funcionario era de %.2f, com um aumento de %.2f ficara %.2f", salario, 0.4*salario, salario*1.4);
    return 0;
}
