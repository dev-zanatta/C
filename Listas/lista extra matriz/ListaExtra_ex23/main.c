#include <stdio.h>
#include <stdlib.h>
/*Ler dois conjuntos de n´umeros reais, armazenando-os em vetores e calcular o produto
escalar entre eles. Os conjuntos t ˆem 5 elementos cada. Imprimir os dois conjuntos e o
produto escalar, sendo que o produto escalar ´e dado por: x1 * y1 + x2 * y2 + ::: + xn * yn.*/
int main()
{
    int vetA[5], vetB[5], vetC[5];
    for(int i=0;i<5;i++)
        scanf("%d", &vetA[i]);
    for(int i=0;i<5;i++)
        scanf("%d", &vetB[i]);

    for(int i=0;i<5;i++)
        vetC[i]=vetA[i]*vetB[i];
    printf("\n");
    for(int i=0;i<5;i++)
        printf("%d ", vetA[i]);
    printf("\n");
    for(int i=0;i<5;i++)
        printf("%d ", vetB[i]);
    printf("\n");
    for(int i=0;i<5;i++)
        printf("%d ", vetC[i]);




    return 0;
}
