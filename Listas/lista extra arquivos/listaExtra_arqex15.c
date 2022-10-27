#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba como entrada o ano corrente e o nome de dois arquivos: um de
entrada e outro de saída. Cada linha do arquivo de entrada contém o nome de uma pessoa
(ocupando 40 caracteres) e o seu ano de nascimento. O programa devera ler o arquivo de
entrada e gerar um arquivo de saída onde aparece o nome da pessoa seguida por uma string
que representa a sua idade.
• Se a idade for menor do que 18 anos, escreva “menor de idade”
• Se a idade for maior do que 18 anos, escreva “maior de idade”
• Se a idade for igual a 18 anos, escreva “entrando na maior idade”*/
int main()
{
    int i=0, linhas=0, anohj;
    char character;
    char nome_pes[25];
    int ano;
    char nome1[20], nomefinal1[25];
    char nome2[20], nomefinal2[25];
    printf("Insira o ano atual\n");
    scanf("%d", &anohj);
    printf("Insira o nome dos arquivos\n");//de leitura e arq_maioridade
    fflush(stdin);
    scanf("%s %s", nome1, nome2);
    sprintf(nomefinal1, "%s.txt", nome1);
    sprintf(nomefinal2, "%s.txt", nome2);
    
    FILE *f = fopen(nomefinal1, "r");
    FILE *f2 = fopen(nomefinal2, "w+");
    if(f==NULL || f2==NULL)
    {
        printf("erro na abertura\n");
        return 1;
    }
    
    while(fscanf(f, "%s %d", nome_pes, &ano)!=EOF)
    {
        fprintf(f2, "%s ", nome_pes);
        ano=anohj-ano;
        if(ano>18)
            fprintf(f2, "Maior de idade\n");
        else if(ano<18)
            fprintf(f2, "Menor de idade\n");
        else if(ano==18)
            fprintf(f2, "Entrando na maior idade\n");
        //fprintf(f2, "%d anos\n", ano);
    }
            

    fclose(f);
    fclose(f2);


    return 0;
}