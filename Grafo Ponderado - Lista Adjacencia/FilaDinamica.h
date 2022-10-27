#ifndef FILADINAMICA_H_INCLUDED
#define FILADINAMICA_H_INCLUDED

typedef struct Nodo
{
    int info;
    struct nodo *prox;
} nodo;

typedef struct
{
    nodo *inicio;
    nodo *fim;
} Fila;

Fila *cria_fila();
int vazia(Fila *f);
void push(Fila *f, int x);
int pop(Fila *f) ;

#endif // FILADINAMICA_H_INCLUDED
