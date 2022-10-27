#include <stdio.h>
#include <stdlib.h>
/*Fac¸a um programa que preencha um vetor com 10 n´umeros reais, calcule e mostre a
quantidade de n´umeros negativos e a soma dos n´umeros positivos desse vetor.*/
int main()
{
    int vet[10], neg=0, somaneg=0, somapos=0;
    for(int i=0;i<10;i++)
        vet[i]=(rand() %200)-100;
    for(int i=0;i<10;i++)
        printf("%d ",vet[i]);
    for(int i=0;i<10;i++)
    {
        if(vet[i]<0)
        {
            neg++;
            somaneg+=vet[i];
        }
        else if(vet[i]%2==0)
            somapos+=vet[i];
    }

    printf("Soma dos %d num negativos = %d\nSoma positivos = %d\n", neg, somaneg, somapos);

    return 0;
}
