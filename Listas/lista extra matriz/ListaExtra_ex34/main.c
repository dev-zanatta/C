/*Fac¸a um programa para ler 10 n´umeros DIFERENTES a serem armazenados em um
vetor. Os dados dever ˜ao ser armazenados no vetor na ordem que forem sendo lidos,
sendo que caso o usu´ ario digite um n´umero que j ´a foi digitado anteriormente, o programa
dever ´a pedir para ele digitar outro n´umero. Note que cada valor digitado pelo usu´ ario
deve ser pesquisado no vetor, verificando se ele existe entre os n´umeros que j ´a foram
fornecidos. Exibir na tela o vetor final que foi digitado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int checadentro(int vet3[10],int vet1)
{
    for(int i=0;i<10;i++)
    {
            if(vet3[i]==vet1)
                return 1;
    }
    return 0;
}

int main()
{
    int vet[10], aux=0;
    for(int i=0;i<10;i++)
        {
            vet[i]=INT_MAX;
            //printf("%d ", vet[i]);
        }
    for(int i=0;i<10;i++)
        {
            scanf("%d", &aux);
            if(checadentro(vet, aux)==1)
            {
                printf("Esse numero ja foi, insira novamente\n");
                i--;
            }
            else if(checadentro(vet, aux)==0)
                vet[i]=aux;
        }

    for(int i=0;i<10;i++)
    {
        printf("%d ", vet[i]);
    }


    return 0;
}
