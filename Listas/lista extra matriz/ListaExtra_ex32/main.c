/*Leia dois vetores de inteiros x e y, cada um com 5 elementos (assuma que o usu´ ario n˜ao
informa elementos repetidos). Calcule e mostre os vetores resultantes em cada caso
abaixo:
* Soma entre x e y: soma de cada elemento de x com o elemento da mesma posic¸ ˜ao
em y.
* Produto entre x e y: multiplicac¸ ˜ao de cada elemento de x com o elemento da mesma
posic¸ ˜ao em y.
* Diferenc¸a entre x e y: todos os elementos de x que n˜ao existam em y.
* Intersec¸ ˜ao entre x e y: apenas os elementos que aparecem nos dois vetores.
* Uni˜ao entre x e y: todos os elementos de x, e todos os elementos de y que n˜ao
est ˜ao em x.*/

#include <stdio.h>
#include <stdlib.h>

int checadentro(int vet3[5],int vet1)
{
    for(int i=0;i<5;i++)
    {
            if(vet3[i]==vet1)
                return 1;
    }
    return 0;
}
int main()
{
    int vet1[5], vet2[5], vet3[10], l=0;
    for(int i=0;i<10;i++)
        vet3[i]=INT_MAX;

    for(int i=0;i<5;i++)
    {
        fflush(stdin);
        scanf("%d", &vet1[i]);
    }
    for(int i=0;i<5;i++)
    {
        fflush(stdin);
        scanf("%d", &vet2[i]);
    }
    puts("\nSoma vetores");
    for(int i=0;i<5;i++)
    {
        printf("%d ", vet1[i]+vet2[i]);
    }

    puts("\nMultiplicacao vetores");
    for(int i=0;i<5;i++)
    {
        printf("%d ", vet1[i]*vet2[i]);
    }
    puts("\nDiferenca vetores(x q n ta em y)");
    for(int i=0;i<5;i++)
    {
        if(checadentro(vet2, vet1[i])==0)
        {
            printf("%d ", vet1[i]);
        }
    }

    puts("\nInterseccao vetores(esta nos dois)");
    for(int i=0;i<5;i++)
    {
        if(checadentro(vet1, vet2[i])==1)
        {
            printf("%d ", vet2[i]);
        }
    }

    puts("\nUniao vetores(uniao dos 2 sem repetidos)");
    for(int i=0;i<5;i++)
    {
        if(checadentro(vet3, vet1[i])==0)
        {
            vet3[l]=vet1[i];
            l++;
        }
    }
    for(int i=0;i<5;i++)
    {
        if(checadentro(vet3, vet2[i])==0)
        {
            vet3[l]=vet2[i];
            l++;
        }
    }
    for(int i=0;i<l;i++)
    {
        printf("%d ", vet3[i]);
    }
    return 0;
}