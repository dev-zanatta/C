#include <stdio.h>
#include <stdlib.h>
/*Fac¸a um programa que receba do usu´ ario dois vetores, A e B, com 10 n´umeros inteiros
cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados
do vetor C.*/
int main()
{
    int vetA[10], vetB[10], vetC[10];
    for(int i=0;i<10;i++)
        scanf("%d", &vetA[i]);
    for(int i=0;i<10;i++)
        {
            scanf("%d", &vetB[i]);
            vetC[i]=vetA[i]-vetB[i];
        }

    for(int i=0;i<10;i++)
    {
        printf("%d ", vetA[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ", vetB[i]);
    }
    printf("\nVetor Subtraido\n");
    for(int i=0;i<10;i++)
    {
        printf("%d", vetC[i]);
    }


    return 0;
}
