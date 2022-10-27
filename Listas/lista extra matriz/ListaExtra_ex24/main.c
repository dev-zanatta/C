#include <stdio.h>
#include <stdlib.h>
/*Fac¸a um programa que leia dez conjuntos de dois valores, o primeiro representando o
n´umero do aluno e o segundo representando a sua altura em metros. Encontre o aluno
mais baixo e o mais alto. Mostre o n´umero do aluno mais baixo e do mais alto, juntamente
com suas alturas.*/
int main()
{
    int k=0, l=0, vet[3];
    float vet2[3];
    float maior, menor;
    for(int i=0;i<3;i++)
    {
        scanf("%d %f", &vet[i], &vet2[i]);
    }

    maior=vet2[0];
    menor=vet2[0];

    for(int i=0;i<3;i++)
    {
            if(vet2[i]>=maior)
            {
                maior=vet2[i];
                k=vet[i];
            }
            if(vet2[i]<=menor)
            {
                menor=vet2[i];
                l=vet[i];
            }
    }

    printf("N aluno mais baixo %d com %f de altura\nN aluno mais alto %d com %f de altura", l, menor, k, maior);

    return 0;
}
