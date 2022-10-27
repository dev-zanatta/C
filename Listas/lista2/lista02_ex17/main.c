#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pedido=0, qtd=0;
    printf("Insira o codigo do item e a quantidade a ser solicitada\n1-Cachorro quente\n2-Bauru\n3-Misto quente\n4-Hamburguer\n5-Cheeseburguer\n6-Refrigerante\n");
    scanf("%d %d", &pedido, &qtd);
    if(pedido==1)
    {
        printf("O valor total do pedido e %d", qtd*11);
    }
    else if(pedido==2)
    {
        printf("O valor total do pedido e %.2f", qtd*8.5);
    }
    else if(pedido==3)
    {
        printf("O valor total do pedido e %d", qtd*8);
    }
    else if(pedido==4)
    {
        printf("O valor total do pedido e %d", qtd*9);
    }
    else if(pedido==5)
    {
        printf("O valor total do pedido e %d", qtd*10);
    }
    else if(pedido==6)
    {
        printf("O valor total do pedido e %.2f", qtd*4.5);
    }
    return 0;
}
