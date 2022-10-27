#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Leia 10 n´umeros inteiros e armazene em um vetor. Em seguida escreva os elementos
que s˜ao primos e suas respectivas posic¸ ˜oes no vetor.*/
int checaprimo(int num)
{
    for(int j=2;j<num;j++)
        {
            if(num%j==0)
                return 1;
        }
    return 0;
}

int main()
{
    int vet[10];
    for(int i=0;i<10;i++)
        {
            scanf("%d", &vet[i]);
        }
    
    for(int i=0;i<10;i++)
        {
            if(checaprimo(vet[i])==0)
                {
                    printf("primo %d posicao %d\n", vet[i], i);
                }
        }
    
    return 0;
}
