#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura_predio=0;
    float altura_pessoa=0;
    float sombra_pessoa=0;
    float sombra_predio=0;
    printf("Insira a altura da pessoa, o comprimento da sombra da pessoa e o comprimento da sombra do predio em metros:");
    scanf("%f %f %f", &altura_pessoa, &sombra_pessoa, &sombra_predio);

    float aux=altura_pessoa/sombra_pessoa;
    altura_predio=sombra_predio*aux;
    printf("A altura do predio e de %.2f metros", altura_predio);


    return 0;
}
