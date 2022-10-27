#include <stdio.h>
#include <string.h>
#include "func.h"
 

struct Cinema inicializa()
{
    struct Cinema cine;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<10; j++)
        {
            cine.cadeiras[i][j]=0;
        }
    }
    return cine;
}

int scanea()
{
    int n;
    printf("Escolha uma opcao:\n1- Comprar ingresso\n2- Reservar ingresso\n3- Cancelar reserva\n4- Mostrar as opcoes de poltronas\n5- Buscar poltrona pela pessoa\n6- Sair\n");
    scanf("%d", &n);
    return n;
}

struct Cinema compra(struct Cinema cine)
{
    printf("Qual poltrona deseja comprar?\n");
    int n;
    scanf("%d", &n);
    int i=n,j=0, poltrona=n;
    while(n>10)
    {
        n-=10;
        i=n;
        j++;
    }
    while(cine.cadeiras[j][i-1]!=0)
    {
        printf("Poltrona não está livre, escolha outra:\n");
        j=0;
        mostra(cine);
        fflush(stdin);
        scanf("%d", &n);
        poltrona=n;
        while(n>10)
        {
            n-=10;
            i=n;
            j++;
        }
    }
    cine.cadeiras[j][i-1]=1;
    printf("NOME: ");
    fflush(stdin);
    scanf("%s", cine.pessoas[j][i-1].nome);
    printf("CPF: ");
    scanf("%d", &cine.pessoas[j][i-1].CPF);
    printf("Passagem com a poltrona %d adquirida com sucesso\n", poltrona);
    return cine;
}
struct Cinema cancelaCompra(struct Cinema cine)
{
    printf("Qual poltrona que deseja cancelar a compra?\n");
    int n;
    scanf("%d", &n);
    int i=n,j=0;
    while(n>10)
    {
        n-=10;
        i=n;
        j++;
    }
    if(cine.cadeiras[j][i-1]!=0)
    {
        printf("Compra cancelada com sucesso ");
    }
    else
        printf("Essa poltrona nao estava comprada\n");
    return cine;

}
struct Cinema reserva(struct Cinema cine)
{
    printf("Qual poltrona deseja reservar?\n");
    int n;
    fflush(stdin);
    scanf("%d", &n);
    int i=n,j=0, poltrona=n;
    while(n>10)
    {
        n-=10;
        i=n;
        j++;
    }
    while(cine.cadeiras[j][i-1]!=0)
    {
        printf("Cadeira não está livre, escolha outra:\n");
        j=0;
        mostra(cine);
        fflush(stdin);
        scanf("%d", &n);
        poltrona=n;
        while(n>10)
        {
            n-=10;
            i=n;
            j++;
        }       
    }
    cine.cadeiras[j][i-1]=2;
    printf("Poltrona %d reservada com sucesso\n", poltrona);
    return cine;
}

struct Cinema cancelaReserva(struct Cinema cine)
{
    printf("Qual poltrona deseja cancelar a reserva?\n");
    int n;
    fflush(stdin);
    scanf("%d", &n);
    int i=n,j=0;
    while(n>10)
    {
        n-=10;
        i=n;
        j++;
    }
    if(cine.cadeiras[j][i-1]==2)
    {
        cine.cadeiras[j][i-1]=0;
    }
    else printf("Essa poltrona nao estava reservada!!\n");
    return cine;
}
void busca(struct Cinema cine, int *p1,int *p2)
{
    int n;
    printf("Digite o CPF da pessoa que voce quer saber a poltrona: ");
    scanf("%d",&n);
    if(n!=0)
    {
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<10; j++)
            {
                if(n==cine.pessoas[i][j].CPF)
                {
                    *p1 = i;
                    *p2 = j;
                    return;
                }
            }
        }
    }
    *p1=-1;
    *p2=-1;
}

void mostra(struct Cinema cine)
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(cine.cadeiras[i][j]==0 && (j+1)+(i*10)<10) printf("[0%d]", (j+1)+(i*10));
            else if(cine.cadeiras[i][j]==0 && (j+1)+(i*10)>=10) printf("[%d]", (j+1)+(i*10));
            else if(cine.cadeiras[i][j]==1) printf("[XX]");
            else if(cine.cadeiras[i][j]==2) printf("[##]");
        }
        printf("\n");
    }
    printf("[ ] = Poltronas vazias\n[X] = Poltronas ja compradas\n[#] = Poltronas ja reservadas\n");
}
