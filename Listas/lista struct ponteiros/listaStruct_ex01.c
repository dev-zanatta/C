#include <stdio.h>
#include <stdlib.h>
/*Implemente duas funções, uma que devolve o vetor ordenado por preços e outra que devolve o vetor
ordenado pela quantidade de itens no estoque. Funções void ordenaPreco(struct Produto vet[], int
n) e void ordenaQuant(struct Produto vet[], int n).*/

struct Produto
{
    char nome[80];
    double preco;
    int quantidade;
};

void imprime(struct Produto vet[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%s preco:%.2lf quant %d\n", vet[i].nome, vet[i].preco, vet[i].quantidade);
    }
    printf("\n");
}

void cadastra(struct Produto vet[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Insira o  nome do produto\n");
        fflush(stdin);
        //getchar();
        scanf(" %[^\n]", vet[i].nome);
        printf("Insira o  preco do produto\n");
        fflush(stdin);
        //getchar();
        scanf(" %lf", &vet[i].preco);
        printf("Insira a quantidade no estoque do produto\n");
        fflush(stdin);
        //getchar();
        scanf(" %d", &vet[i].quantidade);
    }
}

void ordenaPreco(struct Produto vet[], int n)
{
    struct Produto aux;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(vet[i].preco<vet[j].preco)
            {
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
        }
    }
}

void ordenaQuant(struct Produto vet[], int n)
{
    struct Produto aux;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(vet[i].quantidade<vet[j].quantidade)
            {
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
        }
    }
}

int main()
{
    int n=3;
    struct Produto produtos[n];
    cadastra(produtos, n);
    
    ordenaPreco(produtos, n);
    printf("Ordenado por preco\n");
    imprime(produtos, n);
    
    ordenaQuant(produtos, n);
    printf("Ordenado por quant\n");
    imprime(produtos, n);
    return 0;
}