#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Leia um vetor com 20 n´umeros inteiros. Escreva os elementos do vetor eliminando elementos
repetidos.*/
int main()
{
    int vet[5], vetaux[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d", &vet[i]);
        vetaux[i]=vet[i];
    }

    for(int i=0;i<5;i++)
        {
            for(int j=i+1;j<5;j++)
            {
                if(vet[i]==vetaux[j])
                {
                    vetaux[i]=INT_MAX;
                    vetaux[j]=INT_MAX;
                }
            }
        }
    printf("Vetor sem os repetidos:");
    for(int i=0;i<5;i++)
        {
            if(vetaux[i]!=INT_MAX)
                printf("%d ", vetaux[i]);
        }
    return 0;
}
