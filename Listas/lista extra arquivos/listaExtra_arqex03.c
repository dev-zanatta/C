#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas letras são
vogais.*/

int main()
{
    int vogais=0;
    char c;
    FILE *f = fopen("arq1.txt", "r");
    if(f==NULL)
    {
        printf("Erro\n");
        return 1;
    }
    while(fscanf(f, "%c", &c)!=EOF)
    {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            {
                vogais++;
            }
    }
    printf("\n%d vogais\n", vogais);
    fclose(f);
    return 0;
}