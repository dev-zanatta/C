#include <stdio.h>
#include <stdlib.h>
/*Fazer um programa para ler 5 valores e, em seguida, mostrar a posic¸ ˜ao onde se encontram
o maior e o menor valor.*/
int main()
{
    int vet[5], maior, menor, k=0, l=0;;
    for(int i=0;i<5;i++)
        scanf("%d", &vet[i]);
    maior = vet[0];
    menor=vet[0];
    for(int i=0;i<5;i++)
    {
        if(vet[i]>maior)
            {
                maior=vet[i];
                k=i;
            }
            if(vet[i]<menor)
            {
                menor=vet[i];
                l=i;
            }
    }

    printf("Posicao maior = %d\nPosicao menor = %d\n", k, l);

    return 0;
}
