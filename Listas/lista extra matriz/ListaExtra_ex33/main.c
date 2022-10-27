/*Fac¸a um programa que leia um vetor de 15 posic¸ ˜oes e o compacte, ou seja, elimine as
posic¸ ˜oes com valor zero. Para isso, todos os elementos `a frente do valor zero, devem ser
movidos uma posic¸ ˜ao para tr ´as no vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[15], aux=0, aux2=0;
    for(int i=0;i<15;i++)
    {
        scanf("%d", &vet[i]);
    }
    for(int j=0;j<14;j++)
    {

        for(int i=0;i<14;i++)
        {
            if(vet[i]==0)
            {
                aux=vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=aux;
            }
        }
    }

    for(int i=0;i<15-aux;i++)//esta imprimindo apenas os numeros diferentes de zero
        if(vet[i]!=0)
            printf("%d ", vet[i]);

    return 0;
}

