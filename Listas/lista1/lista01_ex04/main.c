#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int idade=0;
    char nome[10];
    printf("Insira a sua idade:\n");
    scanf("%d", &idade);
    printf("Insira seu nome:\n");
    scanf("%s", &nome);
    printf("Voce ja viveu %d dias.\n", idade*365);
    printf("Seu nome e %s", nome);
}
