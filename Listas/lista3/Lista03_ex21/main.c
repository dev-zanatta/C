#include <stdio.h>
#include <stdlib.h>
/*O restaurante da quest�o 17 realiza reservas de mesas atrav�s de liga��es telef�nicas e possui 50 mesas dispon�veis para reserva.
Dessas mesas, 25 s�o na �rea de fumantes e 25 na �rea de n�o fumantes. Para cada liga��o recebida, o restaurante deve verificar
se a reserva � para a mesa na �rea de fumantes ou de n�o fumantes e contabilizar a quantidade de mesas restantes dispon�veis em
cada �rea. Construa um algoritmo que realize a reserva das mesas e encerre a execu��o quando n�o houver mais mesas dispon�veis
(nem na �rea de fumantes, nem na �rea de n�o fumantes).*/
int main()
{
    int i=0, fumante=0, n_fumante=0, escolha=0;
    while(i<50)
    {
        printf("Informe se a mesa e para fumante ou para nao fumante\n1 - Fumante\n2 - Nao fumante\n");
        scanf("%d", &escolha);
        if(escolha==1)
        {
            if(fumante<25)
            {
                printf("Mesa para fumante reservada com sucesso\n");
                fumante++;
                i++;
            }
            else
            {
                printf("Nao ha mais mesas disponiveis para fumantes.\n");
            }
        }
        else if(escolha==2)
        {
            if(n_fumante<25)
            {
                printf("Mesa para nao fumante reservada com sucesso\n");
                n_fumante++;
                i++;
            }
            else
                printf("Nao ha mais mesas disponiveis para nao fumantes.\n");
        }
        else
            printf("Opcao invalida\n");
    }
    printf("Todas as mesas foram reservadas.\n");
    return 0;
}
