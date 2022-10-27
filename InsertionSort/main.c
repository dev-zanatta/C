#include <stdio.h>
#include <stdlib.h>

void imprime(int vet[])
{
    for(int i=0;i<10;i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main()
{
    int vet[10]={10,6,15,23,1,4,19,13,49,2};
    printf("Vetor original:");
    imprime(vet);
    for(int i=1;i<10;i++)
    {
        int j=i-1; 
        int parada=vet[i];
        
        while(vet[j]>parada && j>=0)
            {
                vet[j+1]=vet[j];
                j--;
            }
        vet[j+1]=parada;
        
    }
    printf("Vetor ordenado:");
    imprime(vet);
    return 0;
}