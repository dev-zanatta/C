#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor=0, aux=0;
    printf("Insira o valor em reais a ser separado:\n");
    scanf("%d", &valor);
    aux=valor;
    printf("O valor de RS%d pode ser dividido em", valor);
    printf(" %d notas de 100, ", valor/100);
    valor-=((valor/100)*100);
    printf("%d notas de 50,", valor/50);
    valor-=((valor/50)*50);
    printf("%d notas de 10,", valor/10);
    valor-=((valor/10)*10);
    printf("%d notas de 5", valor/5);
    valor-=((valor/5)*5);
    printf(" e %d notas de 1.", valor/1);
    valor-=((valor/1)*1);
    return 0;
}
