#include <stdio.h>
#include <stdlib.h>
/*Ler um conjunto de n´umeros reais, armazenando-o em vetor e calcular o quadrado das
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos t ˆem
10 elementos cada. Imprimir todos os conjuntos.*/
int main()
{
    int conj[10], quad[10];
    for(int i=0;i<10;i++)
        scanf("%d", &conj[i]);
    for(int i=0;i<10;i++)
        quad[i]=conj[i]*conj[i];

    for(int i=0;i<10;i++)
    {
        printf("%d ", conj[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ", quad[i]);
    }


    return 0;
}
