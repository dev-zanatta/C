#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas letras são
vogais e quantas são consoantes.*/
int main()
{
    int vogais=0, consoantes=0;
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
        if(c>='a' && c<='z' && (c!='a' && c!='e' && c!='i' && c!='o' && c!='u'))
        {
            consoantes++;
        }
    }
    printf("\n%d vogais %d consoantes\n", vogais, consoantes);
    fclose(f);
    return 0;
}