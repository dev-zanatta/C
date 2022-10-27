#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas vezes cada
letra do alfabeto aparece dentro do arquivo.*/
int main()
{
    int vet[26];
    char c;
    for(int i=0;i<27;i++)
    {
        vet[i]=0;
    }

    FILE *f = fopen("arq1.txt", "r");
    if(f==NULL)
    {
        printf("Erro\n");
        return 1;
    }
    while(fscanf(f, "%c", &c)!=EOF)
    {
        if(c>='a' && c<='z')
            {
                //printf("entrou scanf\n");
                vet[(c-97)]++;
                //printf("letra %c", c);
            }
    }
    for(int i=0;i<26;i++)
    {
        printf("Letra %c = %d\n", i+97, vet[i]);
    }
    fclose(f);
    return 0;
}