#include <stdio.h>
#include <stdlib.h>
//Ler um vetor R de 5 elementos contendo o gabarito da LOTO. A seguir ler um vetor A de 10 elementos con-tendo uma aposta.
//A seguir imprima quantos pontos fez o apostador.

int main()
{
    int vetr[5];
    int veta[10];
    int pontos=0;
    printf("Insira os numeros da LOTO\n");
    for (int i=0; i<5; i++)
    {

        scanf("%d", &vetr[i]);
    }
    printf("Insira os numeros jogados\n");
    for (int i=0; i<10; i++)
    {
        scanf("%d", &veta[i]);
    }
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<10; j++)
        {
            if(vetr[i]==veta[j])
                pontos++;
        }
    }
    printf("Voce fez %d pontos.\n", pontos);
    return 0;
}
