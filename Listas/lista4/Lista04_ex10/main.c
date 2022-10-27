#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//Elabore um algoritmo que leia um vetor e em seguida apresente o vetor ordenado � use o m�todo de ordena��o que preferir.
int main()
{
    int tam=0, menor=0, i=0, j=0, k=0;
    printf("Informe o tamanho do vetor:\n");
    scanf("%d", &tam);//pegando o tamanho do vetor

    int vet[tam];
    int aux[tam];
    for (int i=0; i<tam; i++)
    {
        scanf("%d", &vet[i]);
    }//preenchendo o vetor
    menor=vet[0];
    for (int i=0; i<tam; i++)//preenche o vetor ordenado
    {
        for (int j=0; j<tam; j++)//percorre o vetor original descobrindo o menor
        {
            if(vet[j]<=menor)
            {
                menor=vet[j];//troca se for menor
                k=j;//salva a posicao de onde estava o menor para setar um numero alto
            }
        }
        vet[k]= INT_MAX;
        aux[i]=menor;//aloca o menor numero no vetor ordenado depois de ter terminado o laco e achado o menor valor
        menor=vet[0];//reseta o menor para ele percorrer todos os valores de novo
    }

    for (int i=0; i<tam; i++)
    {
        printf("%d ", aux[i]);
    }

    return 0;

}
