#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura=0;
    char sexo=0;
    float peso=0;
    printf("Insira a altura em metros e o seu sexo(f para feminino e m para masculino).\n");
    scanf("%f %c", &altura, &sexo);
    if(sexo=='m')
        peso=(72.7*altura)-58;
    else if(sexo=='f')
        peso=(62.1*altura)-44.7;
    printf("O peso ideal e de %.2f", peso);

    return 0;
}
