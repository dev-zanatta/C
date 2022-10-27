#include <stdio.h>
#include <stdlib.h>
//Crie um programa que l ˆe 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
int main()
{
    int valores[6];
    for(int i=0;i<6;i++)
        scanf("%d", &valores[i]);

    for(int i=0;i<6;i++)
        printf("%d\n", valores[i]);
    return 0;
}
