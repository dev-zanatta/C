#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prod=0, i=0;
    float preco=0, total=0;
    printf("Insira a quantidade de produtos adquiridos :\nInsira os precos de cada produto:");
    scanf("%d", &prod);
    while(i<prod)
    {
        scanf("%f", &preco);
        total+=preco;
        i++;
    }
    printf("Total %.2f", total);
    return 0;
}
