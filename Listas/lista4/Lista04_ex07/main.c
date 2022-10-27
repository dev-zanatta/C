#include <stdio.h>
#include <stdlib.h>
//Ler 2 vetores, R de 5 elementos e S de 10 elementos. Gere um vetor X que possua os elementos comuns a R e a S.
//Considere que no mesmo vetor não haverá números repetidos. Escrever o vetor X.
int main()
{
    int vetr[5];
    int vets[10];
    int vetx[5]={0};
    int i=0, j=0, n=0;

    for (int i=0; i<5; i++)
    {
        scanf("%d", &vetr[i]);
    }

    for (int i=0; i<10; i++)
    {
        scanf("%d", &vets[i]);
    }

    for (int i=0; i<5; i++)
    {
        for (int j=0; j<10; j++)
        {
            if(vetr[i]==vets[j])
            {
               vetx[n]=vetr[i];
               n++;
            }
        }
    }
    printf("Vetor com os numeros repetidos:\n");
    for (int i=0; i<n; i++)
    {
        printf("%d ", vetx[i]);
    }

    return 0;
}
