#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Digite um texto e uma palavra, depois tente achar a palavra no texto
int encontrapalavra(char texto[])
{
    int j=0, contador=0, k=0;
    char palavra[100];

    printf("Escolha a palavra filtro\n");
    gets(palavra);

    for(int i=0;i<strlen(texto);i++)
    {
        if((texto[i]==palavra[j]))//compara a palavra
            {
                k=i;
                j++;
            }
        else//so entra aqui se nao for igual, entao zera J. J nunca vai zerar se a palavra for encontrada inteira
            j=0;


        if(j==strlen(palavra))//retorna a posicao se for a palavra
        {  
            printf("%s esta no texto\n",palavra);
            return k-strlen(palavra)+1;
        }
    }
    return -1;
}

int main()
{
    int TAM=100;
    char texto[TAM];
    printf("Digite um texto:\n");
    gets(texto);
    int res = encontrapalavra(texto);
    if(res==-1)
        printf("Nao achou\n");
    else
        printf("Palavra filtro encontrada na posicao %d\n", res);
}
