#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a=0, b=0;
    printf("Insira as dimensoes do terreno:\n");
    scanf("%f %f", &a, &b);
    printf("A area do terreno e de : %.2f", a*b);
}
