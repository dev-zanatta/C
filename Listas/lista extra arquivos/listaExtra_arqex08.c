#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*Faça um programa que leia o conteúdo de um arquivo e crie um arquivo com o mesmo conteúdo,
mas com todas as letras minúsculas convertidas para maiúsculas. Os nomes dos arquivos serão
fornecidos, via teclado, pelo usuário. A função que converte maiúscula para minúscula é o
toupper(). Ela é aplicada em cada caractere da string.*/
int main()
{
    char character;
    char nome1[20], nome2[20];
    printf("Insira os nomes dos arquivos\n");
    scanf("%s", nome1);
    scanf("%s", nome2);
    char nomearq1[20], nomearq2[20];
    sprintf(nomearq1, "%s.txt", nome1);
    sprintf(nomearq2, "%s.txt", nome2);
    FILE *f = fopen(nomearq1, "r");
    FILE *f2 = fopen(nomearq2, "w+");
    printf("\n\n**passou**\n\n");
    if(f==NULL || f2==NULL)
        {
            printf("Erro na abertura\n");
            return 1;
        }
    while(fscanf(f, "%c", &character)!=EOF)
    {
        if((character>='a' && character<='z') || (character>='A' && character<='Z'))
        {
            fprintf(f2, "%c", toupper(character));
        }
        else if(character==' ' || character=='\n')
        {
            fprintf(f2, "%c", character);
        }
    }
    fclose(f);
    fclose(f2);
    return 0;
}