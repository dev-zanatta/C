#include <stdio.h>
#include <stdlib.h>
/*Suponha que o vetor esteja ordenado em ordem crescente por valor de RG. Implemente uma função
de busca por RG, que opera como a busca binária, e que caso exista uma pessoa no cadastro com o
RG a ser buscado, devolve o índice deste cadastro e caso não exista o RG a ser buscado, devolve -1.*/
<<<<<<< HEAD
#define tam 5
=======
#define tam 3
>>>>>>> aaf8803c9796fd9b20008ef73b07cf50bb89998b
struct Pessoa
{
    int rg;
    int cpf;
    char nome[80];
};

void preenche(struct Pessoa cadastro[])
{
    for(int i=0;i<tam;i++)
    {
        printf(" Insira rg cpf e nome\n");
        fflush(stdin);
        scanf("%d %d %[^\n]", &cadastro[i].rg, &cadastro[i].cpf, cadastro[i].nome);
    }
}

<<<<<<< HEAD
int buscarg(struct Pessoa cadastro[], int rgaux)//busca binaria
{
    int n;
    if(tam%2!=0)
    {   
        n=(tam/2);
        for(int i=n;i>=0 && i<=(tam-1);)
        {
            if(cadastro[i].rg==rgaux)
            {
                return i;
            }
            else if(cadastro[i].rg<rgaux)
            {
                i++;
            }
            else if(cadastro[i].rg>rgaux)
            {
                i--;
            }
        }
    }
    else
    {
        n=(tam/2)-1;
        for(int i=n;i<=(tam-1) && i>=0;)
        {
            if(cadastro[i].rg==rgaux)
            {
                return i;
            }
            else if(cadastro[i].rg<rgaux)
            {
                i++;
            }
            else if(cadastro[i].rg>rgaux)
            {
                i--;
            }
=======
int buscarg(struct Pessoa cadastro[], int rgaux)
{
    for(int i=0;i<tam;i++)
    {
        if(cadastro[i].rg==rgaux)
        {
            return i;
>>>>>>> aaf8803c9796fd9b20008ef73b07cf50bb89998b
        }
    }
    return -1;
}

void imprime(struct Pessoa cadastro[], int i)
{
    printf("%d %d %s\n", cadastro[i].rg, cadastro[i].cpf, cadastro[i].nome);
}

int main()
{
    int rg, achou;
    struct Pessoa cadastro[tam];
    preenche(cadastro);
    printf("Insira o RG a ser filtrado\n");
    fflush(stdin);
    scanf("%d", &rg);
    achou=buscarg(cadastro, rg);
    if(achou!=-1)
        {
            printf("O rg foi encontrado no indice %d\n", achou);
            imprime(cadastro, achou);
        }
    else
        printf("Nao encontrado\n");
    return 0;
}