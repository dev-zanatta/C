#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pares=0, impares=0, m50=0, men7=0;
    int vet1[20];
    for (int i=0; i<20; i++)
    {
        scanf("%d", &vet1[i]);
        if(vet1[i]%2==0)
        {
            pares++;
        }
        else if(vet1[i]%2!=0)
        {
            impares++;
        }

        if(vet1[i]>50)
        {
            m50++;
        }
        else if(vet1[i]<7)
        {
            men7++;
        }
    }
    printf("\nPares %d\nImpares %d\nMaiores que 50 %d\nMenores que 7 %d\n", pares, impares, m50, men7);
    return 0;
}
