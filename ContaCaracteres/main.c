#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Conta a quantidade de cada letra do alfabeto digitado em um texto
int main()
{
    char texto[500], carac[127]={0};
    printf("Insira o texto:\n");
    gets(texto);

    for(int i=0;i<strlen(texto);i++)
    {
        if((texto[i]!=' ') && (texto[i]>=33 && texto[i]<=127) )
        {
            carac[texto[i]]++;
        }
    }
    for(int i=65;i<=122;i++)
    {
        if(carac[i]> 0)
            printf("carac %c : %d\n", i, carac[i] );
    }
}
