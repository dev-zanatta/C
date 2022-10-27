#include <stdio.h>
#include <stdlib.h>
/*O restaurante da questão 17 realiza reservas de mesas através de ligações telefônicas e possui 50 mesas disponíveis para reserva.
Dessas mesas, 25 são na área de fumantes e 25 na área de não fumantes. Para cada ligação recebida, o restaurante deve verificar
se a reserva é para a mesa na área de fumantes ou de não fumantes e contabilizar a quantidade de mesas restantes disponíveis em
cada área. Construa um algoritmo que realize a reserva das mesas e encerre a execução quando não houver mais mesas disponíveis
(nem na área de fumantes, nem na área de não fumantes).*/
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
