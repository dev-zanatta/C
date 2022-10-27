#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Faça um programa no qual o usuário informa o nome do arquivo e uma palavra, e retorne o
número de vezes que aquela palavra aparece no arquivo.*/
int main()
{
    char character;
    char nome1[20], nomefinal[25], palavra[20];
    int cont_palavra=0, i=0;
    int cont_vezes=0;
    printf("Insira o nome do arquivo\n");
    fflush(stdin);
    scanf("%s", nome1);
    printf("Insira a palavra a buscar\n");
    fflush(stdin);
    scanf("%s", palavra);
    sprintf(nomefinal, "%s.txt", nome1);
    FILE *f = fopen(nomefinal, "r");
    if(f==NULL)
        {
            FILE *f = fopen(nomefinal, "w+");
            if(f==NULL)
            {
                printf("Erro na abertura\n");
                return 1;
            }
        }
    while(fscanf(f, "%c", &character)!=EOF)
    {
        if(character==palavra[i])
        {
            cont_palavra++;
            i++;
        }
        else if(character!=palavra[i])
        {
            cont_palavra=0;
            i=0;
        }
        if(cont_palavra==strlen(palavra))
        {
            cont_vezes++;
        }
    }
    printf("apareceu %d vezes\n", cont_vezes);
    fclose(f);
    return 0;
}