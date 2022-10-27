#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nivel=0, horas=0, salario=0;

    printf("Insira o nivel do professor(1, 2 ou 3) e a quantidade de horas/aula\n");
    scanf("%d %d", &nivel, &horas);
    if(nivel==1)
    {
        salario=12*horas*4.5;
    }
    if(nivel==2)
    {
        salario=17*horas*4.5;
    }
    if(nivel==3)
    {
        salario=25*horas*4.5;
    }
    printf("O salario desse professor e %d", salario);
    return 0;
}
