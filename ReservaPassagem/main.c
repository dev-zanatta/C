#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 50

struct cliente
{
    char nome[50];
    int rg;
    int ocupado;
};

struct passagem
{
    int numero;
    int ocupado;
    int rg;
};

struct viagem
{
    char origem[50];
    char destino[50];
    char hora_saida[5];
    char hora_chegada[5];
    float preco;
    char empresa[50];
    int ocupado;
};

struct cliente cadastra_cliente(struct cliente clientes[])
{
    char cadastrar='s';

    while(cadastrar=='s')
    {
        struct cliente aux;
        printf("Insira o nome e o RG\n");
        fflush(stdin);
        scanf("%s", aux.nome);
        fflush(stdin);
        scanf("%d", &aux.rg);
        aux.ocupado=1;
        for(int i=0;i<tam;i++)
        {
            if(clientes[i].ocupado==0)
            {
                clientes[i]=aux;
                break;
            }
        }
        
        printf("Deseja inserir outro?(s ou n)\n");
        fflush(stdin);
        scanf(" %c", &cadastrar);
        if(cadastrar!='s')
            break;
    }
};

void viag_cadast(struct viagem viagens[])
{
    for(int i=0;i<tam;i++)
    if(viagens[i].ocupado==1)
    {
        printf("%s\n", viagens[i].hora_saida);
        printf("Viagem saindo de %s para %s, partindo as %s com chegada as %s, custando %.2f pela empresa %s \n", viagens[i].origem, viagens[i].destino, viagens[i].hora_saida, viagens[i].hora_chegada, viagens[i].preco, viagens[i].empresa);
    }
}

void imprime_clientes(struct cliente clientes[])
{
    int cont=0;
    for(int i=0;i<tam;i++)
    {
        if(clientes[i].ocupado==1)
            {
                cont++;
                printf("nome %s rg %d \n", clientes[i].nome, clientes[i].rg);
            }
    }
    if(cont==0)
        printf("\nNenhum cliente cadastrado\n");
    printf("\n");
}

void cadastra_viagem(struct viagem viagens[])
{
    printf("Entrou\n");
    char confirma;
    struct viagem aux;
    printf("Insira a origem da viagem\n");
    getchar();
    fflush(stdin);
    scanf("%[^\n]", aux.origem);
    printf("Insira o destino da viagem\n");
    getchar();
    fflush(stdin);
    scanf("%[^\n]", aux.destino);
    printf("Insira o horario de saida\n");
    getchar();
    fflush(stdin);
    scanf("%[^\n]", aux.hora_saida);
    printf("Insira o horario previsto de chegada\n");
    getchar();
    fflush(stdin);
    scanf("%[^\n]", aux.hora_chegada);
    printf("Insira o preco da passagem\n");
    getchar();
    fflush(stdin);
    scanf("%f", &aux.preco);
    printf("Insira a empresa de transporte\n");
    getchar();
    fflush(stdin);
    scanf("%[^\n]", aux.empresa);
    printf("Deseja confirmar a passagem?(s ou n)\n");
    getchar();
    fflush(stdin);
    scanf("%c", &confirma);
    if(confirma=='s')//checa_viagem
    {
        for(int i=0;i<tam;i++)
        {
            if(viagens[i].ocupado==0)
            {
                strcpy(viagens[i].origem,aux.origem);
                strcpy(viagens[i].destino,aux.destino);
                strcpy(viagens[i].empresa,aux.empresa);
                strcpy(viagens[i].hora_saida,aux.hora_saida);
                strcpy(viagens[i].hora_chegada,aux.hora_chegada);
                viagens[i].preco=aux.preco;
                viagens[i].ocupado=1;
                printf("Viagem cadastrada com sucesso\n");
                i=tam;
                break;
            }
        }
    }
    else
        printf("Informacoes do cadastro descartadas\n");
}

void cancela_passagem(struct passagem passagens[])
{
    int vaga;
    printf("Insira a vaga para cancelar a passagem\n");
    fflush(stdin);
    scanf("%d", &vaga);
    while(checa_vaga(passagens, vaga)!=1)
    {
        printf("Vaga nao esta reservada, insira novamente\n");
        scanf("%d", &vaga);
    }
    vaga--;
    passagens[vaga].ocupado=0;
    printf("Passagem cancelada com sucesso\n");
}



int checa_vaga(struct passagem passagens[], int vaga)
{
     if(passagens[vaga-1].ocupado==0)
        {
            return 0;//ta livre
        }
    return 1;//vaga ocupada
}

int checa_rg(struct cliente clientes[], int rgaux)
{
    for(int i=0;i<tam;i++)
    {
        if(clientes[i].ocupado==1)
        {
            if(clientes[i].rg==rgaux)
                return 1;
        }
    }
    return 0;
}


void passagens_dispo(struct passagem passagens[])
{
    printf("Vagas disponiveis:\n");
    for(int i=0;i<(tam/10);i++)
        {
            for(int j=0;j<(tam/5);j++)
            {
                if(passagens[(j)+(i*10)].ocupado==0)
                    {
                        if((j+1)+(i*10)<10)
                            printf("[0%d]", (j+1)+(i*10));
                        else
                            printf("[%d]",  (j+1)+(i*10));
                    }
                else
                    printf("[xx]");
            }
            printf("\n");
        }
        printf("\n");
}

void passagens_reserv(struct passagem passagens[], struct cliente clientes[])
{
    for(int i=0;i<tam;i++)
    {
        if(passagens[i].ocupado==1)
            {
                for(int j=0;j<tam;j++)
                {
                    if(clientes[j].rg==passagens[i].rg)
                        printf("Passagem %d reservada para : %s com o RG %d\n", i+1, clientes[j].nome, clientes[j].rg);
                }
            }
    }    
}

void reserva_passagem(struct passagem passagens[], struct cliente clientes[])
{
    int vaga, rgaux;
    char confirma_passagem;
    passagens_dispo(passagens);
    printf("Escolha o numero da vaga\n");
    fflush(stdin);
    scanf("%d", &vaga);
    while(checa_vaga(passagens, vaga)!=0)//verifica se a vaga esta disponivel
    {
        printf("Vaga indisponivel, escolha outra vaga\n");
        fflush(stdin);
        scanf("%d", &vaga);
    }
    
    printf("Insira o seu RG para reservar a passagem\n");
    fflush(stdin);
    scanf("%d", &rgaux);
    
    while(checa_rg(clientes, rgaux)!=1)//verifica se o rg esta cadastrado no sistema
    {
        printf("RG invalido, insira um RG cadastrado\n");
        fflush(stdin);
        scanf("%d", &rgaux);    
    }

    printf("Deseja confirmar a passagem %d no RG %d(s ou n)\n", vaga, rgaux);
    getchar();
    fflush(stdin);
    scanf(" %c", &confirma_passagem);
    if(confirma_passagem=='s')//confirma com o usuario a reserva
    {
        passagens[vaga-1].rg=rgaux;
        passagens[vaga-1].ocupado=1;
        printf("Passagem %d ocupada pelo RG %d\n", vaga, rgaux);
    }
    else if(confirma_passagem=='n')
    {
        printf("Reserva de passagem descartada\n");
    }
}

void exclui_cliente(struct cliente clientes[])//void??struct cliente
{
    int rgaux;
    printf("Insira o RG do cliente a ser excluido\n");
    fflush(stdin);
    scanf("%d", &rgaux);
    while(checa_rg(clientes, rgaux)!=1)
    {
        printf("RG nao cadastrado, insira novamente\n");
        scanf("%d, &rgaux");
    }
    for(int i=0;i<tam;i++)
    {
        if(clientes[i].rg==rgaux)
            {
                clientes[i].ocupado = 0;
                break;
            }
    }
}

int mostra_menu()
{
    int opcao=-1;
    printf("1 - Cadastrar cliente\n2 - Reservar passagem\n3 - Excluir cliente\n4 - Exibir passagens disponiveis\n");
    printf("5 - Exibir passagens reservadas\n6 - Cancelar passagem\n0 - Sair do programa\n");
    fflush(stdin);
    scanf("%d", &opcao);
    return opcao;
}

int mostra_menu_adm()
{
    int opcao=-1; 
    printf("1 - Cadastrar viagem\n2 - Exibir clientes\n3 - Exibir viagens cadastradas\n0 - Sair do programa\n");
    fflush(stdin);
    scanf("%d", &opcao);
    return opcao;
}

int main()
{
    int opcao=-1, painel=-1, opcaoadm=-1;
    struct passagem passagens[tam];
    struct cliente clientes[tam];
    struct viagem viagens[tam];
    for(int i=0;i<tam;i++)
        {
            clientes[i].ocupado=0;
            passagens[i].ocupado=0;
            viagens[i].ocupado=0;
        }
    printf("Modo ADM - 1\nModo Cliente - 2\n");
    fflush(stdin);
    scanf("%d", &painel);
    if(painel==1)
    {
        while(opcaoadm!=0)
        {
            opcaoadm=mostra_menu_adm();
            if(opcaoadm==1)
            {
                cadastra_viagem(viagens);
            }
            else if(opcaoadm==2)
            {
                imprime_clientes(clientes);
            }
            else if(opcaoadm==3)
            {
                viag_cadast(viagens);
            }

        }
    }
    else if(painel==2)
    {
        while(opcao!=0)
        {
            //escolher origem, destino, horario da viagem e ver precos
            //adm - cadastrar viagens (origem, destino, horario, preco, empresa)
            opcao = mostra_menu();
            if(opcao==1)
            {
                cadastra_cliente(clientes);
            }
            else if(opcao==2)
            {
                reserva_passagem(passagens, clientes);
            }
            else if(opcao==3)
            {
                exclui_cliente(clientes);
            }
            else if(opcao==4)
            {
                passagens_dispo(passagens);
            }
            else if(opcao==5)
            {
                passagens_reserv(passagens, clientes);
            }
            else if(opcao==6)
            {
                cancela_passagem(passagens);
            }
        }
    }
    return 0;
}
