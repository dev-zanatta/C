#include <stdio.h>
#include <stdlib.h>

int main()
{
    int saldo=0;
    float credito=0;
    printf("Insira o saldo medio\n");
    scanf("%d", &saldo);
    if(saldo>=0 && saldo<=200)
        printf("O credito disponivel e de %.2f", 0*saldo);
    else if(saldo>200 && saldo<=400)
        printf("O credito disponivel e de %.2f", 0.2*saldo);
    else if(saldo>400 && saldo<=600)
        printf("O credito disponivel e de %.2f", 0.3*saldo);
    else if(saldo>600)
        printf("O credito disponivel e de %.2f", 0.4*saldo);
    return 0;
}
