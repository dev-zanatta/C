#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nome[50];
    printf("Insira seu nome\n");
    gets(nome);
    int i=0;
    while(i<=10)
    {
        printf("%s\n", nome);
        i++;
    }
    return 0;
}
