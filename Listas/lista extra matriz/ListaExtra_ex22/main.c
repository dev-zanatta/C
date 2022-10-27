#include <stdio.h>
#include <stdlib.h>
/*Fac¸a um programa que leia dois vetores de 10 posic¸ ˜oes e calcule outro vetor contendo,
nas posic¸ ˜oes pares os valores do primeiro e nas posic¸ ˜oes impares os valores do segundo.*/
int main()
{
    int vetA[10], vetB[10], vetC[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d", &vetA[i]);
    }
    for(int i=0;i<10;i++)
    {
        scanf("%d", &vetB[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
            vetC[i]=vetA[i];
        else if(i%2!=0)
            vetC[i]=vetB[i];
    }
    for(int i=0;i<10;i++)
        printf("%d ", vetA[i]);
    printf("\n");
    for(int i=0;i<10;i++)
        printf("%d ", vetB[i]);
    printf("\n");
    for(int i=0;i<10;i++)
        printf("%d ", vetC[i]);
    printf("\n");


    return 0;
}
