#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd_p=0, qtd_m=0, qtd_g=0;
    printf("Insira a quantidade de camisetas pequenas vendidas:\n");
    scanf("%d", &qtd_p);
    printf("Insira a quantidade de camisetas medias vendidas:\n");
    scanf("%d", &qtd_m);
    printf("Insira a quantidade de camisetas grandes vendidas:\n");
    scanf("%d", &qtd_g);
    int total = qtd_p*10 + qtd_m*12+qtd_g*15;
    printf("O valor arrecadado foi de RS%d", total);
    return 0;
}
