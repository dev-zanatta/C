#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED
struct Pessoa
{
    char nome[100];
    int CPF;
};

struct Cinema
{
    int cadeiras[5][10];
    struct Pessoa pessoas[5][10];
};
struct Cinema inicializa();
int scanea();
struct Cinema compra(struct Cinema cine);
struct Cinema reserva(struct Cinema cine);
struct Cinema cancelaReserva(struct Cinema cine);
void busca(struct Cinema cine, int *p1,int *p2);
void mostra(struct Cinema cine);
#endif