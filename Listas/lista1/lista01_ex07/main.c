#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia=0, mes=0;
    printf("Insira o dia:\n");
    scanf("%d", &dia);
    printf("Insira o mes:\n");
    scanf("%d", &mes);
    int qtd_dias= ((mes-1)*30) + dia;
    if(mes<=1)
        printf("Se passaram %d dia(s) do ano.\n", dia);
    else
        printf("Se passaram %d dias do ano.\n", qtd_dias);
    return 0;
}
