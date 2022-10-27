#ifndef FILAESTATICA_H_INCLUDED
#define FILAESTATICA_H_INCLUDED

typedef struct
{
    int v[100];
    int inicio, fim;
} Fila;

Fila *cria_fila() ;
int vazia(Fila *f) ;
void push(Fila *f, int x) ;
int pop(Fila *f);

#endif // FILAESTATICA_H_INCLUDED
