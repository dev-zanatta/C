#include <stdio.h>
#include <stdlib.h>
/*Fac¸a um programa que receba do usu´ ario um vetor com 10 posic¸ ˜oes. Em seguida dever ´a
ser impresso o maior e o menor elemento do vetor.*/
int main()
{
    int vet[10], maior, menor;
    for(int i=0;i<10;i++)
        scanf("%d", &vet[i]);
    menor = vet[0];
    maior = vet[0];

    for(int i=0;i<10;i++)
    {
        if(vet[i]>maior)
            maior=vet[i];
        if(vet[i]<menor)
            menor=vet[i];
    }

    printf("Maior %d\nMenor %d", maior, menor);

    return 0;
}
