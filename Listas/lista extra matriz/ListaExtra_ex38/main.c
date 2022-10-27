/*Pec¸a ao usu´ ario para digitar dez valores num´ ericos e ordene por ordem crescente esses
valores, guardando-os num vetor. Ordene o valor assim que ele for digitado. Mostre ao
final na tela os valores em ordem.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprime(int vet[])
{
    for(int i=0;i<10;i++)
    {
        printf("%d ", vet[i]);
    }
    puts("\n");
}

int main()
{
    int vet[10], aux1;
    for(int i=0;i<10;i++)
    {
        vet[i]=INT_MAX;
    }
    scanf("%d", &vet[0]);
    for(int i=1;i<10;i++)
    {
        scanf("%d", &vet[i]);
        for(int j=0;j<i;j++)
        {
            if(vet[i]<vet[j])
            {
                aux1=vet[i];
                vet[i]=vet[j];
                vet[j]=aux1;
                //imprime(vet);
            }
        }
    }

    for(int i=0;i<10;i++)
    {
        printf("%d ", vet[i]);
    }

}

