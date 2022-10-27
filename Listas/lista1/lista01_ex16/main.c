#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd_queijo=0;
    int qtd_mort=0;
    int qtd_carne=0;
    int sanduiches=0;
    printf("Insira a quantidade de sanduiches a fazer:\n");
    scanf("%d", &sanduiches);
    qtd_queijo=sanduiches*2;
    qtd_mort=sanduiches*1;
    qtd_carne=sanduiches*1;
    printf("Voce precisara comprar %.2f kg de queijo, %.2f kg de mortadela, e %.2f kg de carne", qtd_queijo*0.05, qtd_mort*0.05, qtd_carne*0.05);

    return 0;
}
