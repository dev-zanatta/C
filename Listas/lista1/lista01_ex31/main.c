#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso=0;
    printf("Entre com o peso da pessoa:\n");
    scanf("%f", &peso);
    printf("Se a pessoa engordar 15 por cento ira pesar %.2f e se emagrecer 20 por cento ira pesar %.2f", peso*1.15, peso*0.8);
    printf("\n");
    return 0;
}
