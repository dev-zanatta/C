#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0, aux=0;
    printf("Insira o numero:\n");
    scanf("%d", &num);
    aux=num%100;
    num=num/100;
    printf("centena = %d\n", num);
    num=aux%10;
    aux=aux/10;
    printf("dezena = %d\n", aux);
    printf("unidade = %d", num);



}
