#include <stdio.h>
#include <stdlib.h>//10 palavra
/*Abra um arquivo texto, calcule e escreva o número de caracteres, o número de linhas é o número
de palavras neste arquivo. Escreva também quantas vezes cada letra ocorre no arquivo
(ignorando letras com acento). Obs.: palavras são separadas por um ou mais caracteres espaço,
tabulação (\t) ou nova linha (\n).*/
int main()
{
    char character;
    int vet[26];
    for(int i=0;i<26;i++)
    {
        vet[i]=0;
    }
    int carac=0, cont_palavra=0, cont_linhas=0;//contador de caracteres, palavras e linhas
    int aux_palavra=0;
    FILE *f = fopen("arq_conta_tudo.txt", "r");
    while(fscanf(f, "%c", &character)!=EOF)
    {
        if((character>='a' && character<='z') )
        {
            carac++;
            vet[character-97]++;
            aux_palavra++;
        }
        if((character=='\n' || character=='\t' || character==' ') && aux_palavra>0)
        {
            cont_palavra++;
            aux_palavra=0;
        }
        if(character=='\n')
        {
            cont_linhas++;
            aux_palavra=0;
        }
    }
    printf("tem %d caracteres, %d linhas e %d palavras\n", carac, cont_linhas, cont_palavra);
    
    for(int i=0;i<26;i++)//qtd de cada letra
    {
        if(vet[i]!=0)
            printf("%d letras %c\n", vet[i], i+97);
    }
    
    return 0;
}