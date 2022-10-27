#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que l ˆe 6 valores inteiros e, em seguida, mostre na tela os valores lidos
na ordem inversa.*/
int main()
{
    int vet[6];
    for(int i=0;i<6;i++)
    {
        scanf("%d", &vet[i]);
    }

    for(int i=5;i>=0;i--)
        printf("%d", vet[i]);

    return 0;
}
