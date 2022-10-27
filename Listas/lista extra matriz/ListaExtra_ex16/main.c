#include <stdio.h>
#include <stdlib.h>
/*Fac¸a um programa que leia um vetor de 5 posic¸ ˜oes para n´umeros reais e, depois, um
c´odigo inteiro. Se o c´odigo for zero, finalize o programa; se for 1, mostre o vetor na ordem
direta; se for 2, mostre o vetor na ordem inversa. Caso, o c´odigo for diferente de 1 e 2
escreva uma mensagem informando que o c´odigo ´e inv´ alido.*/
int main()
{
    int vet[5], aux;
    for(int i=0;i<5;i++)
    {
        scanf("%d", &vet[i]);
    }
    scanf("%d", &aux);
    if(aux==0)
        return 0;
    else if(aux==1)
    {
        for(int i=0;i<5;i++)
            printf("%d ", vet[i]);
    }
    else if(aux==2)
    {
        for(int i=4;i>=0;i--)
            printf("%d ", vet[i]);
    }
    return 0;
}
