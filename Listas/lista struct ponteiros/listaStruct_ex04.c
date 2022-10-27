#include <stdio.h>
#include <stdlib.h>

/*Refaça as funções de busca sequencial e busca binária vistas em aula assumindo que o vetor possui
chaves que podem aparecer repetidas. Neste caso, você deve retornar em um outro vetor todas as
posições onde a chave foi encontrada.
Protótipo da função: void busca(int vet[], int tam, int chave, int posicoes[], int *n)
• Você deve devolver em posicoes[] as posições de vet que possuem a chave, e devolver em *n o
número de ocorrências da chave.
– OBS: Na chamada desta função, o vetor posições deve ter espaço suficiente (por exemplo,
tam) para guardar todas as possíveis ocorrências da chave.*/

<<<<<<< HEAD
void busca_seq(int vet[], int chave, int posicoes[], int *n, int tam)
{
    int j=0;
    for(int i=0;i<tam;i++)
    {
        if(vet[i]==chave)
            {
                posicoes[j]=i;
                j++;
            }
    }
    *n=j;
}

void busca_bin(int vet[], int chave, int posicoes[], int *n, int tam)
{
    int ocorrencias=0;
    tam=tam/2;
    if(vet[tam]==chave)
    {
        while(vet[tam]==vet[tam-1])
        {
            tam--;
        }
        while(vet[tam]==chave)
        {
            posicoes[ocorrencias]=tam;
            ocorrencias++;
            tam++;
        }
        *n=ocorrencias;
        }
    else if(vet[tam]>chave)
    {
        busca_bin(vet, chave, posicoes, n, tam);
    }
    else if(vet[tam]<chave)
    {
        busca_bin(vet, chave, posicoes, n, (2*tam)+(tam/2));
    }
}

int main()
{
    int tam=10;
    int vet[]={3,3,3,4,4,4,7,7,8,8}, posicoes[tam], chave, n;
    printf("Insira a chave\n");
    fflush(stdin);
    scanf("%d", &chave);

    //busca_seq(vet, chave, posicoes, &n, tam);
    busca_bin(vet, chave, posicoes, &n, tam);
    for(int i=0;i<n;i++)
    {
        printf("%d %d\n", posicoes[i], vet[posicoes[i]]);
    }
=======
int main()
{

>>>>>>> aaf8803c9796fd9b20008ef73b07cf50bb89998b
    return 0;
}