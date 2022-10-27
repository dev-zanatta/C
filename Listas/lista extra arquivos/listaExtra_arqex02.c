#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas linhas esse
arquivo possui.*/
int main()
{
    int linhas=0;
    char c;
    FILE *f = fopen("arq1.txt", "r");
    if(f==NULL)
    {
        printf("Erro\n");
        return 1;
    }
    while(fscanf(f, "%c", &c)!=EOF)
    {
        if(c=='\n')
            {
                linhas++;
            }
    }
    printf("\n%d linhas\n", linhas);
    fclose(f);
}