#include <stdio.h>
#include <stdlib.h>

int main()
{
    float novelos=0, blusas=0;
    printf("Insira a quantidade de novelos que foram utilizados e a quantidade de blusas produzidas:\n");
    scanf("%f %f", &novelos, &blusas);
    printf("Esta fabrica utiliza %.2f novelos para fabricar uma blusa.", novelos/blusas);

    return 0;
}
