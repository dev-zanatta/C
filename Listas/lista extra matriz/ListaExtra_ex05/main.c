#include <stdio.h>
#include <stdlib.h>
//Leia um vetor de 10 posic¸ ˜oes. Contar e escrever quantos valores pares ele possui.
int main()
{
    int vet[10], par=0;
    for(int i=0;i<10;i++)
        scanf("%d", &vet[i]);

    for(int i=0;i<10;i++)
        if(vet[i]%2==0)
            par++;

    printf("Pares: %d\n", par);

    return 0;
}
