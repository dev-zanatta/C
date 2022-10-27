#include <stdio.h>
#include <stdlib.h>

int main()
{
    int litros_suco=0;
    printf("Insira a quantidade de litros de suco que deseja fazer\n");
    scanf("%d", &litros_suco);
    float agua=litros_suco*0.8;
    float maracuja=litros_suco*0.2;
    printf("Voce precisara de %.2f litros de agua e %.2f litros de suco de maracuja\n", agua, maracuja);


    printf("\n");
    return 0;
}
