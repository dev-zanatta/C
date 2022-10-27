#include <stdio.h>
#include <stdlib.h>
//Faca um Bubble Sort para ordenar um vetor
void imprime(int vet[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
}
int main()
{
    int vet[]={1,5,7,12,2,18,25,3,98,21,72,13,27,95,3,6};
    int i=0, j=0, aux=0, ultimo=0;;
    int tam = sizeof(vet)/sizeof(vet[0]);
    printf("Vetor inicial: ");
    imprime(vet, tam);

    ultimo = vet[tam];
    for(j=0; j<tam; j++)
        {
        for(i=0;i<tam;i++)
            {
                if((vet[i]>vet[i+1]) && (vet[i+1])!=ultimo)
                    {
                        aux=vet[i];
                        vet[i]=vet[i+1];
                        vet[i+1]=aux;
                    }
            }
            //imprime(vet, tam);
        }
        printf("Vetor ordenado: ");
    imprime(vet, tam);
    return 0;
}
