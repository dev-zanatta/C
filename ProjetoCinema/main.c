#include <stdio.h>
#include <stdlib.h>
#include "func.c"

int main()
{
    struct Cinema cine=inicializa();
    int n=0;
    while(n!=6)
    {
        n = scanea();

        if(n == 1)
        {
            mostra(cine);
            cine = compra(cine);
        }
        if(n == 2)
        {
            mostra(cine);
            cine = reserva(cine);
        }
        if(n == 4)
        {
            mostra(cine);
        }
        if(n == 3)
        {
            mostra(cine);
            cine = cancelaReserva(cine);
        }
        if(n == 5)
        {
            int aux1,aux2;
            busca(cine,&aux1,&aux2);
            if(aux1==-1&&aux2==-1) printf("CPF nao cadastrado!\n");
            else printf("A poltrona de %s eh a poltrona %d\n", cine.pessoas[aux1][aux2].nome,(aux1*10)+aux2+1);
        }
    }

    return 0;
}