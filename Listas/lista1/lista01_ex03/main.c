#include <stdio.h>
#include <stdlib.h>

int main()
{
    int paes=0;
    int broas=0;
    printf("Insira a quantidade de paes vendidos:\n");
    scanf("%d", &paes);
    printf("Insira a quantidade de broas vendidos:\n");
    scanf("%d", &broas);
    float total_vendas = (paes*0.12)+(broas*1.5);
    printf("O total arrecado nas vendas foi de %.2f\n", total_vendas);
    printf("O total que devera ser guardado e de %.2f", 0.1*total_vendas);
}
