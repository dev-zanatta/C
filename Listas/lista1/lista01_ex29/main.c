#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco_produto=0;
    printf("Insira o preco do produto:\n");
    scanf("%f", &preco_produto);
    printf("O preco novo do produto e %.2f\n", preco_produto*0.9);
    return 0;
}
