#include <stdio.h>
#include <stdlib.h>
/*Fac¸a um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
e imprima a m´edia geral.*/
int main()
{
    int notas[15];
    float media=0;
    for(int i=0;i<15;i++)
    {
        scanf("%d", &notas[i]);
        media+=notas[i];
    }

    printf("A media e %.2f", media/15);

    return 0;
}
