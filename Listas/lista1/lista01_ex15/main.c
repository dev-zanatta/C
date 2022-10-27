#include <stdio.h>
#include <stdlib.h>

int main()
{
    int carlos=0, andre=0;
    float felipe=0, total=0;
    printf("Insira o total da conta a ser paga\n");
    scanf("%f", &total);
    carlos = total/3;
    total -= carlos*2;
    printf("Ficara %.2f para Felipe, %d para carlos e %d para Andre.\n", total, carlos, carlos);
    return 0;
}
