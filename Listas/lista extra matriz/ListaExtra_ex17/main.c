#include <stdio.h>
#include <stdlib.h>
/*Leia um vetor de 10 posic¸ ˜oes e atribua valor 0 para todos os elementos que possu´ırem
valores negativos.*/
int main()
{
    int vet[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d", &vet[i]);
        if(vet[i]<0)
            vet[i]=0;
    }
    for(int i=0;i<10;i++)
        printf("%d ", vet[i]);
    return 0;
}
