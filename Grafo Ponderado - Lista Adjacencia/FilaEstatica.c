#include <stdlib.h>
#include <stdio.h>
#include "FilaEstatica.h"
#define MAX 100

Fila *cria_fila()
{
    Fila *f = (Fila *)malloc(sizeof(Fila));
    f->inicio = f->fim = 0;
}
int vazia(Fila *f)
{
    return f->inicio == f->fim ? 1 : 0;
}
void push(Fila *f, int x)
{
    f->v[ f->fim ] = x;
    f->fim = (f->fim+1)%MAX;
}
int pop(Fila *f)
{
    int x = f->v[ f->inicio ];
    f->inicio = (f->inicio + 1)%MAX;
    return x;
}

