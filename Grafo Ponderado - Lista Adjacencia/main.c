#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "FilaEstatica.h"
typedef struct nodo 
{
    int peso;
    int vert;
    struct nodo *prox;
} Nodo;

typedef struct grafo
{
    int tamanho;
    struct nodo **Lista;
    int *visitou;
    int *enfileirado;
    int *nivel;
    int *pai;
} Grafo;

Grafo *criaGrafo(int tamanho)
{
    Grafo *grafo = (Grafo *) malloc(sizeof(Grafo));             // MALLOC PARA ESTRUTURA INTEIRA DO GRAFO
    grafo->tamanho = tamanho;                                   // SETAMOS O NUMERO DE VERTICES DO GRAFO
    grafo->Lista= (Nodo**) malloc(sizeof(Nodo)* tamanho);       // MALLOC PARA A LISTA DE ADJACENCIA DO GRAFO
    grafo->visitou=(int *) malloc(sizeof(int) * tamanho);       // MALLOC PARA O VETOR DE VISITADOS
    grafo->enfileirado=(int *) malloc(sizeof(int) * tamanho);   // MALLOC PARA O VETOR DE ENFILEIRADOS
    grafo->nivel=(int *) malloc(sizeof(int) * tamanho);         // MALLOC PARA OS NIVEIS
    grafo->pai=(int *) malloc(sizeof(int) * tamanho);           // MALLOC PARA OS PAIS

    for(int i=1; i<=tamanho; i++)     //NESTE FOR DEFINIMOS A LISTA DE TODOS OS VERTICES COMO NULL, E TODOS VERTICES COMO N�O VISITADOST
    {
        grafo->Lista[i]=NULL;
        grafo->visitou[i]=0;
        grafo->enfileirado[i]=0;
        grafo->nivel[i]=0;
        grafo->pai[i]=0;
    }
    return grafo;
}

Grafo *criaAresta(Grafo *grafo, int a, int b, int peso)  // + A B w
{
    Nodo *novo = (Nodo*)malloc(sizeof(Nodo));                   // MALLOC PARA UM NOVO NODO NA LISTA
    novo->vert=b;                                               // DIZEMOS QUE O VERTICE REPRESENTADO POR ESSE NOVO NODO � IGUAL A 'B'
    novo->prox=grafo->Lista[a];                                 // DIZEMOS QUE O PROX DESSE NOVO NODO � O NODO CABE�A DE LISTA ANTERIOR
    novo->peso=peso;                                            // SETAMOS O PESO DA ARESTA
    grafo->Lista[a]=novo; // passa a cabeca para o novo nodo    // PASSAMOS A CABE�A DA LISTA PARA O NODO NOVO

    novo = (Nodo*)malloc(sizeof(Nodo));                         // TODO PROCESSO � FEITO NOVAMENTE, MAS INVES DE INSERIR 'B' NA LISTA DE 'A',
    novo->vert=a;                                               // INSERIMOS 'A' NA LISTA DE 'B'
    novo->prox = grafo->Lista[b];
    novo->peso=peso;
    grafo->Lista[b]=novo; // passa a cabeca para o novo nodo

    return grafo;
}

Grafo *removeAresta(Grafo *g, int a, int b)
{

    Nodo *temp = g->Lista[a]; //NODO AUXILIAR PARA PERCORRER A LISTA
    Nodo *anterior; // CRIADO UM NODO PARA ARMAZENAR O ANTERIOR


    if(temp->vert==b) //SE PRECISAR REMOVER A CABECA DA LISTA
    {
        g->Lista[a] = temp->prox; //PASSAMOS A CABE�A PARA O PROXIMO NODO
        temp=NULL;
        free(temp); //LIBERAMOS O NODO TEMP CUJO VERTICE � IGUAL A 'B'
        return g;
    }

    while(temp!=NULL && temp->vert!=b)  //ENQUANTO O TEMP NAO FOR NULO, E SEU VERTICE NAO FOR B
    {
        anterior = temp;                //SETAMOS ESTE TEMP COMO O ANTERIOR, PARA NAO PERDERMOS O NODO ANTERIOR AO NODO QUE SERA REMOVIDO
        temp = temp->prox;              //COMANDO PARA CONTINUAR PERCORRENDO A LISTA ENQUANTO ESTIVER NO WHILE
    }

    anterior->prox=temp->prox;         //DIZEMOS QUE O PROXIMO DO NODO ANTERIOR, AGORA � O PROXIMO DO NODO QUE VAMOS REMOVER
    temp=NULL;
    free(temp);                        //LIBERAMOS O NODO CUJO VERTICE � IGUAL A 'B'
    return g;
}

void Free(Grafo *g)
{
    int i, n=g->tamanho;
    Nodo *aux;
    free(g->visitou);//FREE NO VETOR DE VISITADOS
    free(g->enfileirado); //FREE NO VETOR DE ENFILEIRADOS
    free(g->nivel); //FREE NO VETOR DE NIVEIS
    free(g->pai); //FREE NO VETOR DE PAIS
    for(i=1; i<=n; i++)                //DANDO FREE NA LISTA DE ADJACENCIA
    {
        Nodo *temp = g->Lista[i];
        while(temp)
        {
            aux = temp;
            temp = temp->prox;
            free(aux);
        }
    }
    free(g);
}

int printPeso(Grafo *grafo, int a, int b) // w A B
{
    Nodo* temp = grafo->Lista[a];       //NODO PARA PERCORREMOS A LISTA LIGADA

    while (temp)                        //ENQUANTO O TEMP NAO FOR NULO
    {
        if (temp->vert==b)              //SE O VERTICE DO TEMP FOR IGUAL A 'B'
        {
            printf("%d\n", temp->peso); //PRINTAMOS O PESO DESSA ARESTA
            return temp->peso;          //RETORNO O PESO, NAO QUE SEJA NECESSARIO.
        }
        temp=temp->prox;
    }
    printf("aresta inexistente\n"); //SE NAO FOR ENCONTRADO A ARESTA DESEJADA, PRINTAMOS QUE A ARESTA � INEXISTENTE E RETORNAMOS INT_MAX
    return INT_MAX;
}

int pegaPeso(Grafo *grafo, int a, int b) // w A B   //FUNCIONA DA MESMA MANEIRA QUE A FUN��O ACIMA, MAS SEM OS PRINTS
{
    Nodo* temp = grafo->Lista[a];                   //USO ELA PARA IMPRIMIR A MATRIZ, AQUI SIM, � NECESSARIO QUE RETORNEMOS O PESO DA ARESTA.

    while (temp)
    {
        if (temp->vert==b)
        {
            //printf("%d\n", temp->peso);
            return temp->peso;
        }
        temp=temp->prox;
    }
    //printf("aresta inexistente\n");
    return INT_MAX;
}

void printMatriz(Grafo *grafo)                    // NESSA FUN��O EU GERO UMA MATRIZ, E PREENCHO ELA COM O PESO RESPECTIVO DE SUA POSI��O
{
    int n = grafo->tamanho, i, j;
    int matriz[n+1][n+1];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            matriz[i][j]=pegaPeso(grafo, i, j);
        }
    }

    for(i=1; i<=n; i++)                          // NESSE FOR, CASO O PESO SEJA INT_MAX EU PRINTO UM TRA�O
    {
        for(j=1; j<=n; j++)
        {
            if(matriz[i][j]==INT_MAX)
                printf(" - ");
            else                                // SEN�O EU PRINTO O PESO (FIZ UM ESQUEMINHA PRA VER SE O NUMERO TEM UM OU DOIS DIGITOS, PRA FICAR MAIS BONITO NA MATRIZ)
            {
                if(matriz[i][j]<10)
                    printf(" %d ", matriz[i][j]);
                else  printf("%d ", matriz[i][j]);

            }
            if(j==grafo->tamanho)               // AQUI PULO A LINHA
                printf("\n");
        }

    }
    printf("\n");
}

int printVizinhos(Grafo *grafo, int V)          // INICIO UMA CONTAGEM NO 0, CRIO O TEMP PARA PERCORRER A LISTA,
{
    int cont=0;                                 // ENQUANTO O TEMP NAO FOR NULO, SOMO UM AO CONTADOR, PRA OBTER O NMR DE VIZINHOS.
    Nodo *temp = grafo->Lista[V];
    while(temp)
    {
        printf("%d ", temp->vert);
        cont++;
        temp=temp->prox;
    }
    if(cont==0)                                // SE A CONTAGEM FOR 0, PRINTO 'NENHUM'
        printf("(nenhum)");
    printf("\n");
    return cont;
}

int Vizinhos(Grafo *grafo, int V)              // MESMA FUN�AO Q EM CIMA, MAS SEM OS PRINTS, USO NA FUN��O 'POPULAR'
{
    int cont=0;
    Nodo *temp = grafo->Lista[V];
    while(temp)
    {
        cont++;
        temp=temp->prox;
    }
    return cont;                              // RETORNO O NUMERO DE VIZINHOS PRA PODER USAR NA FUN�AO POPULAR
}

void Popular(Grafo *grafo)                    // VERIFICO TODAS LISTAS DA LISTA DE ADJACENCIA,
{
    int n = grafo->tamanho, i, maior, cont=0; // CONTAGEM INICIA EM 0
    for(i=1; i<=n; i++)
    {
        if (Vizinhos(grafo, i)>cont)          // TODA VEZ QUE UM VERTICE TIVER MAIS VIZINHOS DO QUE A CONTAGEM ATUAL
        {
            cont=Vizinhos(grafo, i);          // A CONTAGEM ATUAL PASSA A SER ESSE NUMERO DE VIZINHOS
            maior = i;                        // E EU MARCO ESTE VERTICE COMO O MAIS POPULAR
        }
    }
    printf("%d (%d vizinhos)\n", maior, cont);   // PRINTO QUAL O VERTICE MAIS POPULAR, E O NUMERO DE VIZINHOS DELE
}


void dfs2(Grafo *g, int i, int *peso)
{
    int vert;
    Nodo *temp = g->Lista[i];
    g->visitou[i]=1;          //MARCO O VERTICE COMO VISITADO
    printf("%d", i);

    while(temp)               //ENQUANTO HOUVER VIZINHOS N�O VISITADOS NA COMPONENTE CONEXA
    {
        *peso+=temp->peso;        //INCREMENTO O PESO TOTAL DA COMPONENTE COM O PESO DESSE VIZINHO
        vert = temp->vert;
        if(g->visitou[vert]==0)   //SE ESTE VERTICE AINDA NAO FOI VISITADO
        {
            printf(" ");
            dfs2(g, vert, peso);  //CHAMA DFS PRA ELE
        }
        temp=temp->prox;
    }
}

void dfs1(Grafo *g)
{
    int i, n = g->tamanho; //N � O NUMERO DE VERTICES DO GRAFO
    int p=0;               //PESO COME�A EM 0
    int c=0;               //NUMERO DE COMPONENTES CONEXAS COME�A EM 0

    for(i=1; i<=n; i++)           //VERIFICO QUAIS VERTICES AINDA NAO FORAM VISITADOS, E FA�O A DFS (FUN��O dfs2) NELES
    {
        if(g->visitou[i]==0)
        {
            printf("[");
            dfs2(g, i, &p);
            printf("]");
            printf(", peso total %d", p/2);
            p=0;
            c++;                 //INCREMENTO O NUMERO DE COMPONENTES CONEXAS, APOS A BUSCA EM PROFUNDIDADE CHAMADA SE REALIZAR.
            printf("\n");
        }
    }
    printf("%d componente(s)\n", c);  //PRINTO O NUMERO DE COMPONENTES.
}

void bfs(Grafo *g, int a, int b)//determina menor caminho em n de arestas a->b, imprime sequencia de vertices em ordem , \n M arestas, pesto total T
{
    int count=0;
    for(count=0; count<g->tamanho+1; count++)//LACO FOR PARA ZERAR AS INFORMACOES
    {
        g->enfileirado[count]=0;
        g->pai[count]=0;
        g->nivel[count]=0;
    }
    Nodo *cabeca = g->Lista[a];
    Fila *fila = cria_fila();
    push(fila, a);//PUSH NO PRIMEIRO VALOR PARA VER OS VIZINHOS
    g->enfileirado[a]=1;
    g->pai[a]=0;//CONDICAO DE PARADA
    while(vazia(fila)==0)//SE A FILA ESTA VAZIA E PORQUE TODOS OS VERTICES DA COMPONENTE CONEXA FORAM ENFILEIRADOS
    {
        int removido = pop(fila);//SALVA O REMOVIDO PARA VER OS VIZINHOS DO REMOVIDO
        cabeca=g->Lista[removido];
        while(cabeca)//PERCORRE A LISTA ATE CHEGAR EM NULL
        {
            if(g->enfileirado[cabeca->vert]==0)//
            {
                push(fila, cabeca->vert);       //COLOCA NA FILA
                g->enfileirado[cabeca->vert]=1; //ANOTA COMO ENFILEIRADO
                g->nivel[cabeca->vert]=1+g->nivel[removido];//SOMA O NIVEL
                g->pai[cabeca->vert]=removido;//DEFINE O PAI
            }
            cabeca=cabeca->prox;//PERCORRENDO A LISTA
        }
    }

    if(g->enfileirado[b]==1)//IF ELSE QUE DEFINE SE TEM CAMINHO
    {
        int tamanhovetor=0, recebedestino=0, somapeso=0,pesoaux=0;
        recebedestino=b;
        tamanhovetor=g->nivel[b];
        int invertido[tamanhovetor+1];//CRIA A MATRIZ QUE RECEBE AS ARESTAS
        invertido[tamanhovetor]=b;
        while(g->pai[recebedestino]!=0)//LOOP QUE PEGA O CAMINHO E CALCULA O PESO
        {
            tamanhovetor--;
            invertido[tamanhovetor]=g->pai[recebedestino];
            pesoaux=pegaPeso(g, recebedestino, g->pai[recebedestino]);
            somapeso+=pesoaux;
            recebedestino=g->pai[recebedestino];
        }

        for(count=0; count<g->nivel[b]+1; count++)//PRINTANDO O VETOR INVERTIDO
        {
            printf("%d ", invertido[count]);
        }
        printf("\n%d arestas, peso total %d\n", g->nivel[b], somapeso);
    }
    else
    {
        printf("(sem caminho)\n");
    }
}

int main()
{

    char comando[50];
    int tamanho;
    int input1, input2, input3;
    scanf("%d", &tamanho);//RECEBE A QUANTIDADE DE VERTICES
    Grafo *g = criaGrafo(tamanho);//CRIA O GRAFO

    do
    {
        fflush(stdin);
        scanf("%s", comando);

        if (strcmp(comando, "+") == 0)
        {
            scanf("%d %d %d", &input1, &input2, &input3);
            criaAresta(g, input1, input2, input3);
        }

        if (strcmp(comando, "w") == 0)
        {
            scanf("%d %d", &input1, &input2);
            printPeso(g, input1, input2);
        }

        if (strcmp(comando, "matriz") == 0)
        {
            printMatriz(g);
        }

        if (strcmp(comando, "vizinhos") == 0)
        {
            scanf("%d", &input1);
            printVizinhos(g, input1);
        }

        if (strcmp(comando, "popular") == 0)
        {
            Popular(g);
        }

        if (strcmp(comando, "dfs") == 0)
        {
            dfs1(g);
            for(int i=1; i<=g->tamanho; i++)
            {
                g->visitou[i]=0;
            }
        }

        if (strcmp(comando, "bfs") == 0)
        {
            scanf("%d %d", &input1, &input2);
            bfs(g, input1, input2);
        }

        if (strcmp(comando, "-") == 0)
        {
            scanf("%d %d", &input1, &input2);
            g=removeAresta(g, input1, input2);
            g=removeAresta(g, input2, input1);
        }

        if (strcmp(comando, "F") == 0)
        {
            Free(g);
        }
    }
    while (strcmp(comando, "F") != 0);

    return 0;

}
