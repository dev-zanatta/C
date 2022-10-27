/*Leia um vetor com 10 n´umeros reais, ordene os elementos deste vetor, e no final escreva
os elementos do vetor ordenado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vet[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d", &vet[i]);
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        if(vet[j]>vet[j+1])
        {
            int aux=vet[j];
            vet[j]=vet[j+1];
            vet[j+1]=aux;
        }
    }
    for(int i=0;i<10;i++)
        printf("%d ", vet[i]);
}

