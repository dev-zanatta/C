#include <stdio.h>
#include <stdlib.h>

/*Implemente um algoritmo que receba um vetor de Datas como parâmetro e que retorne as datas em
ordem cronológica (crie uma função com cabeçalho: void ordena(struct Data vet[], int tam).
Dica: Ordene o vetor separadamente por cada um dos campos.*/

struct Data
{
    int dia;
    int mes;
    int ano;
};

void ordena(struct Data vet[], int tam)
{
    struct Data aux;
    for(int i=0;i<tam;i++)//ordena por ano
    {
        for(int j=0;j<tam;j++)
        {
            if(vet[i].ano<vet[j].ano)
            {
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
        }
    }
    for(int i=0;i<tam;i++)//ordena por mes os q tem mesmo ano
    {
        for(int j=0;j<tam;j++)
        {
            if(vet[i].mes<vet[j].mes && vet[i].ano==vet[j].ano)
            {
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
        }
    }
    for(int i=0;i<tam;i++)//ordena por dia os q tem mesmo ano e mes
    {
        for(int j=0;j<tam;j++)
        {
            if(vet[i].dia<vet[j].dia && vet[i].ano==vet[j].ano && vet[i].mes==vet[j].mes)
            {
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
        }
    }
}

void preenche(struct Data vet[], int tam)
{
    for(int i=0;i<tam;i++)
    {
        scanf("%d-%d-%d", &vet[i].dia, &vet[i].mes, &vet[i].ano);
    }
}

void imprime(struct Data vet[], int tam)
{
    for(int i=0;i<tam;i++)
    {
        printf("%d-%d-%d\n", vet[i].dia, vet[i].mes, vet[i].ano);
    }
}

int main()
{
    int tam = 5;
    struct Data datas[tam];
    preenche(datas, tam);
    //printf("-------------\n");
    //imprime(datas, tam);
    printf("-------------\n");
    ordena(datas, tam);
    imprime(datas, tam);
    return 0;
}