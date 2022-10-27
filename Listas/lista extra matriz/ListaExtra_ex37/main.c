/*Considere um vetor A com 11 elementos onde A1 < A2 < ... < A6 > A7 > A8 >
... > A11, ou seja, est´a ordenado em ordem crescente at ´e o sexto elemento, e a partir
desse elemento est´a ordenado em ordem decrescente. Dado o vetor da quest˜ao anterior,
proponha um algoritmo para ordenar os elementos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vet[11], vet1[5], vet2[5], j=0, k=1, ultimo;
    for(int i=0;i<11;i++)
    {
        scanf("%d", &vet[i]);
    }
    for(int i=0;i<11;i++)
    {
        for(int j=0;j<11;j++)
        if(vet[j]>vet[j+1] && j+1<11)
        {
            int aux=vet[j];
            vet[j]=vet[j+1];
            vet[j+1]=aux;
        }
    }
    ultimo=vet[10];

    for(int i=0;i<5;i++)
    {
        vet1[i]=vet[j];
        j++;
        j++;
    }
    for(int i=0;i<5;i++)
    {
        vet2[i]=vet[k];
        k++;
        k++;
    }
    for(int j=0;j<5;j++)
        {
            int i=0;
            for(i=0;i<5;i++)
            {
                if(vet2[i]<vet2[i+1])
                {
                    int aux=vet2[i];
                    vet2[i]=vet2[i+1];
                    vet2[i+1]=aux;
                }
            }
        }

    for(int i=0;i<5;i++)
    {
        vet[i]=vet1[i];
    }
    vet[5]=ultimo;
    for(int i=0;i<5;i++)
    {
        vet[i+6]=vet2[i];
    }
    puts("\n");
    for(int i=0;i<11;i++)
    {
        printf("%d ", vet[i]);
    }
}

