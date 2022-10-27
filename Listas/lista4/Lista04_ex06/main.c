#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maior=0, menor=0, imaior=0, imenor=0;
    int veta[10];
    for (int i=0; i<10; i++)
    {
        scanf("%d", &veta[i]);
    }
    maior=veta[0];
    menor=veta[0];

    for (int i=0; i<10; i++)
    {
        if(veta[i]>maior)
        {
            imaior=i;
            maior=veta[i];
        }
        else if(veta[i]<menor)
        {
            imenor=i;
            menor=veta[i];
        }
    }
    printf("Maior idade %d na posicao %d\nMenor idade %d na posicao %d", maior, imaior, menor, imenor);

    return 0;
}
