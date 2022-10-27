#include <stdio.h>
#include <stdlib.h>

int main()
{
    float diag_maior=0, diag_menor=0;
    printf("Insira a diagonal maior e a diagonal menor:\n");
    scanf("%f %f", &diag_maior, &diag_menor);
    printf("A area do losango e %.2f", (diag_maior*diag_menor)/2);

    return 0;
}
