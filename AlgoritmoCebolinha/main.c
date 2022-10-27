#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Faca um programa que gera uma versao de um texto fornecido com todos "r" e "rr" trocados por "l", exceto no caso em que o "r" ocorre no final de uma palavra.
*/
int main()
{
    char entrada[500];
    printf("Insira a frase a ser dita pelo Cebolinha:\n");
    fflush(stdin);
    scanf("%[^\n]",entrada);
    for(int i=0;i<(strlen(entrada)-1);i++)
    {
        if(entrada[i]=='r'&&entrada[i+1]=='l')
        {
            entrada[i]='u';
        }
        if(entrada[i]=='r'&&(entrada[i+1]!=' '&&entrada[i+1]!='r'))
        {
            entrada[i]='l';
        }
        else if(entrada[i]=='r' && entrada[i+1]==' ')
            continue;
        else if(entrada[i]=='r'&&entrada[i+1]=='r')
        {
            entrada[i]='l';
            entrada[i+1]='*';
        }
    }
    for(int i=0;i<(strlen(entrada)-1);i++)
    {
        if(entrada[i]=='*')
        {
            for(int j=i;j<strlen(entrada);j++)
                entrada[j]=entrada[j+1];
        }
    }
    puts(entrada);
    return 0;
}
