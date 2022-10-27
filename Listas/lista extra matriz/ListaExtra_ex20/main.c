#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia n´umeros inteiros no intervalo [0,50] e os armazene em um
vetor com 10 posic¸ ˜oes. Preencha um segundo vetor apenas com os n´umeros ´ımpares
do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.*/
int main()
{
    int vet[10], vetimp[10]={-1}, j=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d", &vet[i]);
        if(vet[i]>50 || vet[i]<0)
        {
            printf("Invalido, insira novamente\n");
            i--;
        }
    }

    for(int i=0;i<10;i++)
    {
        if(vet[i]%2!=0)
            {
                vetimp[j]=vet[i];
                j++;
            }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ", vet[i]);
        if(vetimp[i]>0)
            printf("%d", vetimp[i]);
        printf("\n");
    }
    return 0;
}
