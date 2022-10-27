#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1=0, nota2=0;
    printf("Entre com as duas notas\n");
    scanf("%f %f", &nota1, &nota2);
    float media = (nota1*2 + nota2*3)/5;
    printf("A media ponderada e de %.2f", media);
    return 0;
}
