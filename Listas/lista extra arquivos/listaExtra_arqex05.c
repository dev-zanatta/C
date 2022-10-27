#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba do usuário um arquivo texto e um caractere. Mostre na tela
quantas vezes aquele caractere ocorre dentro do arquivo.*/
int main()
{
    int vezes=0;
    char c, procura;
    printf("Escolha o character\n");
    scanf("%c", &procura);
    FILE *f = fopen("arq1.txt", "r");
    if(f==NULL)
    {
        printf("Erro\n");
        return 1;
    }
    while(fscanf(f, "%c", &c)!=EOF)
    {
        if(c==procura)
        {
            vezes++;
        }
    }
    printf("\n%d vezes\n", vezes);
    fclose(f);
    return 0;
}