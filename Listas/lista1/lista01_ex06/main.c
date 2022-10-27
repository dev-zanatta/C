#include <stdio.h>
#include <stdlib.h>

int main()
{
    float prato=0;
    printf("Insira o peso do prato do cliente em kilos\n");
    scanf("%f", &prato);
    printf("O preco a ser pago e de RS%.2f", prato*12);
    return 0;
}
