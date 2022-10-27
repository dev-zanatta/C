#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura=0;
    float raio=0;

    printf("Insira a altura e o raio da caixa d agua cilindrica:\n");
    scanf("%f %f", &altura, &raio);
    float volume = altura*3.14*raio*raio;
    printf("O volume e %.2f litros", volume);
    return 0;
}
