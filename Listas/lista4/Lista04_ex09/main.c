#include <stdio.h>
#include <stdlib.h>
//Ler um vetor D de 10 elementos. Retire todos os valores nulos ou negativos do vetor D. Escrever o vetor após a retirada
//dos nulos e negativos.
int main()
{
    int vetd[10];
    for (int i=0; i<10; i++)
    {
        scanf("%d", &vetd[i]);
    }
    for (int i=0; i<10; i++)
    {
        if(vetd[i]<=0)
        {
            vetd[i]==NULL;
        }
    }
    for (int i=0; i<10; i++)
    {
        if(vetd[i]>0)
            printf("%d ", vetd[i]);
    }
    return 0;
}
