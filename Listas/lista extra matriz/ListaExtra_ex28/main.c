#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Leia 10 n´umeros inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2.
Copie os valores ´ımpares de v para v1, e os valores pares de v para v2. Note que cada
um dos vetores v1 e v2 t ˆem no m´aximo 10 elementos, mas nem todos os elementos s˜ao
utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.*/
int main()
{
    int v[10], v1[10]={INT_MAX},v2[10]={INT_MAX};

    for(int i=0;i<10;i++)
        scanf("%d", &v[i]);

    int j=0, k=0;
    for(int i=0;i<10;i++)
        {
            if(v[i]%2==0)
            {
                v2[j]=v[i];
                j++;
            }
            else if(v[i]%2!=0)
            {
                v1[k]=v[i];
                k++;
            }
        }
    puts("\nVetor impares\n");
    for(int i=0;i<10 && i<k;i++)
    {
        printf("%d ", v1[i]);
    }
    puts("\n\nVetor pares\n");
    for(int i=0;i<10 && i<j;i++)
    {
        printf("%d ", v2[i]);
    }

    return 0;
}
