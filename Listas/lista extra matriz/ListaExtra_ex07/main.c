#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia 10 n´umeros inteiros e os armazene em um vetor. Imprima
o vetor, o maior elemento e a posic¸ ˜ao que ele se encontra.*/
int main()
{
    int vet[10], maior, k=0;;
    for(int i=0;i<10;i++)
        scanf("%d", &vet[i]);
    maior = vet[0];

    for(int i=0;i<10;i++)
    {
        if(vet[i]>maior)
            {
            maior=vet[i];
            k=i;
            }
    }

    printf("Maior %d na posicao %d", maior, k);

    return 0;
}
