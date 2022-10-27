#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba dois arquivos do usuário, e crie um terceiro arquivo com o
conteúdo dos dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do segundo).*/
int main()
{
    char character;
    FILE *f = fopen("arq_concatena1.txt", "r");
    FILE *f2 = fopen("arq_concatena2.txt", "r");
    FILE *f3 = fopen("arq3_concatena.txt", "w+"); 

    if(f==NULL || f2==NULL || f3==NULL)
        {
            printf("Erro na abertura\n");
            return 1;
        }
    while(fscanf(f, "%c", &character)!=EOF)
    {
        fprintf(f3, "%c", character);
    }  
    while(fscanf(f2, "%c", &character)!=EOF)
    {
        fprintf(f3, "%c", character);
    }

    fclose(f);
    fclose(f2);
    fclose(f3);
    return 0;
}