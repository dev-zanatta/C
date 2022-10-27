#include <stdio.h>
#include <stdlib.h>
#include <limits.h>//int_max
#include <string.h>//manipular strings

/*Faça um programa que receba o nome de um arquivo de entrada e outro de saída. O arquivo de
entrada contém em cada linha o nome de uma cidade (ocupando 40 caracteres) e o seu número
de habitantes. O programa deverá ler o arquivo de entrada e gerar um arquivo de saída onde
aparece ordenadamente a cidade e suas populacoes.*/

//O arquivo original com as cidades e populacoes deve ser formatado da seguinte forma:
// cidade,populacao
// cidade2,populacao2
int main()
{
    int linhas=0;
    char character;
    char nome1[20], nomefinal1[20];

    printf("Insira os nomes dos arquivos\n");
    scanf("%s", nome1);
    sprintf(nomefinal1, "%s.txt", nome1);//inserindo .txt no final do nome escolhido
    FILE *f = fopen("arq_popul1.txt", "r");//arq_popul1
    FILE *f2 = fopen(nomefinal1, "w+");
    while(fscanf(f, "%c", &character)!=EOF)//contando as linhas que tem no codigo
    {
        if(character=='\n')
            linhas++;
    }
    rewind(f);//voltando ao comeco do arquivo
    char cidade[linhas][50], populacao[linhas][50];
    
    for(int i=0;i<linhas;i++)//zerando cidade
    {
        for(int j=0;j<50;j++)
        {
            cidade[i][j]=NULL;
        }
    }
    for(int i=0;i<linhas;i++)//zerando populacao
    {
        for(int j=0;j<50;j++)
        {
            populacao[i][j]=NULL;
        }
    }
    int i=0;
    for(int k=0;k<linhas;)//separa as cidades na matriz cidade , e as populacoes na matriz populacao, com os mesmos indices
    {
        while(fscanf(f, "%c", &character)!=EOF)
        {
            if((character>='a' && character<='z') || character == ' ')
            {
                cidade[k][i]=character;
                i++;
            }
            else if(character==',')
            {
                i=0;
            }
            else if(character-'0'>=0 && character-'0'<=9)
            {
                populacao[k][i]=character;
                i++;
            }
            else if(character=='\n')
            {
                k++;
                i=0;
            }
        }
    }

    for(int i=0;i<linhas-1;i++)//ordenando pelas populacoes
    {
        for(int j=i+1;j<linhas;j++)
        {
            if( atoi(populacao[i]) > atoi(populacao[j]) )
            {
                char aux[50]={0};
                strcpy(aux,populacao[i]);//trocando de lugar populacao
                strcpy(populacao[i],populacao[j]);
                strcpy(populacao[j],aux);

                char aux2[50]={0};
                strcpy(aux2,cidade[i]);//trocando de lugar cidade no mesmo indice
                strcpy(cidade[i],cidade[j]);
                strcpy(cidade[j],aux2);
            }
        }
    }

    fprintf(f2, "Cidade mais populosa:%s\n", cidade[linhas-1]);

    for(int i=0;i<linhas;i++)
    {
        fprintf(f2, "%s : %s\n", cidade[i], populacao[i]);
    }
    
    fclose(f);
    fclose(f2);
    return 0;
}