#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/*Faça uma função chamada media que recebe um vetor de double, um inteiro n que indica o tamanho
do vetor, e um inteiro i passado por referência. A função deve retornar a média dos n elementos no
vetor e no inteiro i, passado por referência, deve retornar a posição do elemento que tem o valor mais
próximo da média.
Cabeçalho: double media(double vet[], int *i);.*/
double media(double vet[], int n, int *j)
{
    double perto, media, soma, dist=INT_MAX;
    for(int i=0;i<n;i++)
    {
        soma+=vet[i];
    }
    media=soma/n;
    for(int i=0;i<n;i++)
    {
        if((vet[i]-media<dist) && (vet[i]-media>=0))
            {
                dist=vet[i]-media;
                perto=vet[i];
                *j=i;
            }
        if((vet[i]-media<dist) && (vet[i]-media<0))
            {
                if((vet[i]-media)*-2<dist)
                {
                    dist=(vet[i]-media)*-2;
                    perto=vet[i];
                    *j=i;
                }
            }
    }
    return media;
}

void preenche(double vet[], int n)
{
    printf("Preencha o vetor de %d posicoes\n", n);
    for(int i=0;i<n;i++)
    {
        scanf("%lf", &vet[i]);
    }
}

int main()
{
    int n, i;
    printf("Informe o tamanho do vetor\n");
    scanf("%d", &n);
    double vet[n];
    preenche(vet, n);
    double mediafinal = media(vet, n, &i);
    printf("Media da turma %.2lf\nPosicao do mais perto %d\n", mediafinal , i);
    return 0;
}