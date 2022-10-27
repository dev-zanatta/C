#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Fac¸a um programa que leia um vetor de 10 posic¸ ˜oes e verifique se existem valores iguais
e os escreva na tela.*/
int main()
{
    int vet[10], vetcopia[10];
    for(int i=0;i<10;i++)
        {
            scanf("%d", &vet[i]);
            vetcopia[i]=vet[i];
        }
    for(int i=0;i<10;i++)
        for(int j=i+1;j<10;j++)
        {
            if(vet[i]==vetcopia[j])
            {
                printf("Valor repetido %d\n", vet[i]);
                vetcopia[j]=INT_MAX;
            }

        }



    return 0;
}
