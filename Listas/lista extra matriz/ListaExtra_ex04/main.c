#include <stdio.h>
#include <stdlib.h>
/*Fac¸a um programa que leia um vetor de 8 posic¸ ˜oes e, em seguida, leia tamb´em dois valores
X e Y quaisquer correspondentes a duas posic¸ ˜oes no vetor. Ao final seu programa
dever ´a escrever a soma dos valores encontrados nas respectivas posic¸ ˜oes X e Y .*/

int main()
{
    int vet[8], a=0, b=0;
    for(int i=0;i<8;i++)
        scanf("%d", &vet[i]);
    scanf("%d %d", &a, &b);
    printf("A soma dessas posicoes e %d", vet[a]+vet[b]);

    return 0;
}
