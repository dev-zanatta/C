#include <stdio.h>
#include <stdlib.h>
/*Fac¸a um programa que leia um vetor de 10 n´umeros. Leia um n´umero x. Conte os
m´ ultiplos de um n´umero inteiro x num vetor e mostre-os na tela.*/
int main()
{
    int vet[10], aux;
    for(int i=0;i<10;i++)
    {
        scanf("%d", &vet[i]);
    }
    scanf("%d", &aux);

    for(int i=0;i<10;i++)
    {
        if(vet[i]%aux==0)
            printf("%d e multiplo de %d\n", vet[i], aux);
    }

    return 0;
}
