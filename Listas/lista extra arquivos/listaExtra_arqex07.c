#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba do usuário um arquivo texto. Crie outro arquivo texto contendo
o texto do arquivo de entrada, mas com as vogais substituídas por ‘*’.*/
int main()
{
    char character;
    FILE *f = fopen ("arq1.txt", "r");
    FILE *f2 = fopen ("arq1_subs.txt", "w+");
    while(fscanf(f, "%c", &character)!=EOF)
    {
        if((character>='a' && character<='z') || character == ' ' || character == '\n')
            {
                if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u')
                    {
                        fprintf(f2, "*" );
                    }
                else 
                    {
                        fprintf(f2, "%c", character);
                    }
            }
    }
    fclose(f);
    fclose(f2);
    return 0;
}