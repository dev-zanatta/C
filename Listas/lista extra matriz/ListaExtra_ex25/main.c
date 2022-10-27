#include <stdio.h>
#include <stdlib.h>
/*Fac¸a um programa que preencha um vetor de tamanho 100 com os 100 primeiros naturais
que n˜ao s˜ao m´ ultiplos de 7 ou que terminam com 7.*/
int main()
{
    int vet[100], i=0, j=0;

    while(i<100)
    {
        int aux=j;
        while(aux>10)
        {
            aux-=10;
        }
        if(j%7!=0 || aux==7 )
            {
                vet[i]=j;
                i++;
            }
            j++;
    }

    for(int i=0;i<100;i++)
        printf("%d ", vet[i]);

    return 0;
}
