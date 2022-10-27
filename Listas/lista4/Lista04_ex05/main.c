#include <stdio.h>
#include <stdlib.h>

int main()
{
    int veta[10]={5,4,3,2,15,15,20,30,40,30};
    int menor15=0, igual15=0, maior15=0, aux=0;
     for (int i=0; i<10; i++)
    {
        if(veta[i]<15)
        {
            menor15=menor15+veta[i];
        }
        else if(veta[i]==15)
        {
            igual15++;
        }
        else if(veta[i]>15)
        {
            maior15=maior15+veta[i];
            aux++;
        }
    }
    printf("\nSoma dos menores que 15: %d\nQuantidade de elementos iguais a 15: %d\nMedia dos elementos maiores que 15: %.2f",menor15, igual15, (float)maior15/aux);
    return 0;
}
