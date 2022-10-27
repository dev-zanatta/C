#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso=0;
    printf("Insira o peso em kg (por exemplo: 70.8kg)\n");
    scanf("%f", &peso);
    printf("\nO peso em gramas e: %.2f g", peso*1000);
    return 0;
}
