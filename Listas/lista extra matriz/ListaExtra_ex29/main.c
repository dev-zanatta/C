/*Fac¸a um programa que receba 6 n´umeros inteiros e mostre:
 Os n´umeros pares digitados;
 A soma dos n´umeros pares digitados;
 Os n´umeros ´ımpares digitados;
 A quantidade de n´umeros ´ımpares digitados;*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[6], somapos=0, qtdneg=0;

    for(int i=0;i<6;i++)
    {
        scanf("%d", &vet[i]);
    }
    puts("\nPares e soma de pares:\n");
    for(int i=0;i<6;i++)
    {
        if(vet[i]%2==0)
        {
            somapos+=vet[i];
            printf("%d ", vet[i]);
        }
    }
    printf(" Soma: %d", somapos);
    puts("\n\nNegativos e qtd:\n");
    for(int i=0;i<6;i++)
    {
        if(vet[i]%2!=0)
        {
            printf("%d ", vet[i]);
            qtdneg++;
        }
    }
    printf("Qtd negativos : %d", qtdneg);


    return 0;
}
