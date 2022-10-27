/*Fac¸a um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a uni ˜ao
entre os 2 vetores anteriores, ou seja, que cont´em os n´umeros dos dois vetores. N˜ao
deve conter n´umeros repetidos.*/

#include <stdio.h>
#include <stdlib.h>

int checadentro(int vet3[10],int vet1)
{
    for(int i=0;i<10;i++)
    {
            if(vet3[i]==vet1)
                return 1;
    }
    return 0;
}
int main()
{
    int vet1[10], vet2[10], vet3[20], l=0;
    for(int i=0;i<20;i++)
        vet3[i]=INT_MAX;

    for(int i=0;i<10;i++)
    {
        fflush(stdin);
        scanf("%d", &vet1[i]);
    }
    for(int i=0;i<10;i++)
    {
        fflush(stdin);
        scanf("%d", &vet2[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(checadentro(vet3, vet1[i])==0)
        {
            vet3[l]=vet1[i];
            l++;
        }
    }
    for(int i=0;i<10;i++)
    {
        if(checadentro(vet3, vet2[i])==0)
        {
            vet3[l]=vet2[i];
            l++;
        }
    }
    for(int i=0;i<l;i++)
        printf("%d ", vet3[i]);
}
