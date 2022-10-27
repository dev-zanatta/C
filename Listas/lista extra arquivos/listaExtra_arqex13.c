#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Faça um programa que permita que o usuário entre com diversos nomes e telefone para
cadastro, e crie um arquivo com essas informações, uma por linha. O usuário finaliza a entrada
com ‘0’ para o telefone.*/
int main()
{
    char nome[20];
    char telefone[13]={1};
    FILE *f = fopen("arq_telefone.txt", "w+");
    if(f==NULL)
    {
        printf("Erro de abertura\n");
        return 1;
    }

    while(1)
    {
        printf("Insira o nome e o telefone\n");
        fflush(stdin);
        scanf("%s", nome);
        fflush(stdin);
        scanf("%s", telefone);
        if(strcmp(telefone,"0")==0)
            {
                break;
            }
        fprintf(f ,"%s - %s\n" , nome, telefone);
    }
    
    return 0;
}