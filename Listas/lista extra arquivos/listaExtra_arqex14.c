#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*dado um arquivo contendo um conjunto de nome e data de nascimento (DD MM AAAA, isto e,
3 inteiros em sequência), faça um programa que leia o nome do arquivo e a data de hoje e
construa outro arquivo contendo o nome e a idade de cada pessoa do primeiro arquivo.*/
int main()
{ 
    int i=0, linhas=0;
    char character;
    char nome_pes[25];
    int dia, mes, ano;
    //esse trecho pega o tempo usando a biblioteca time.h e separa nas variaveis
    int diahj, meshj, anohj;
    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    diahj = local->tm_mday;
    meshj = local->tm_mon + 1;
    anohj = local->tm_year + 1900;
    printf("%d %d %d\n", diahj, meshj, anohj);
    //
    char nome[20], nomefinal[25];
    FILE *f = fopen("arq_nome_data.txt", "r");
    printf("Insira o nome do arquivo\n");
    fflush(stdin);
    scanf("%s", nome);
    sprintf(nomefinal, "%s.txt", nome);
    FILE *f2 = fopen(nomefinal, "w+");
    if(f==NULL || f2==NULL)
    {
        printf("erro na abertura\n");
        return 1;
    }
    
    while(fscanf(f, "%s %d %d %d", nome_pes, &dia, &mes, &ano)!=EOF)
    {
        printf("%s %d %d %d\n", nome_pes, dia, mes, ano);
        printf("comecou escanear\n");
        fprintf(f2, "%s ", nome_pes);
        ano=anohj-ano;
        if(mes<meshj)
            ano--;
        else if(mes==meshj && dia>diahj)
            ano--;
        fprintf(f2, "%d anos\n", ano);
    }
            

    fclose(f);
    fclose(f2);
    return 0;
}