#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd_1=0;
    int qtd_5=0;
    int qtd_10=0;
    int qtd_25=0;
    int qtd_50=0;
    int qtd_100=0;
    printf("Insira a quantidade de moedas de 1 centavo, 5 centavos, 10 centavos, 25 centavos, 50 centavos e de 1 real que tinham no cofre:\n");
    scanf("%d %d %d %d %d %d", &qtd_1, &qtd_5, &qtd_10, &qtd_25, &qtd_50, &qtd_100);
    float total= qtd_1*0.01+qtd_5*0.05+qtd_10*0.1+qtd_25*0.25+qtd_50*0.5+qtd_100*1;
    printf("O valor total e de RS%.2f", total);
    return 0;
}
