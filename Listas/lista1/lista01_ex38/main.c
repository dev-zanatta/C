#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano_nasc=0, ano_atual=0;
    printf("Insira o ano de nascimento e o ano atual:\n");
    scanf("%d %d", &ano_nasc, &ano_atual);
    int idade=ano_atual-ano_nasc;
    printf("A idade dessa pessoa e %d em anos, %d em meses, %d em dias , %d em semanas ", idade, idade*12, idade*360, idade*48);
    printf("\n");
    return 0;
}
