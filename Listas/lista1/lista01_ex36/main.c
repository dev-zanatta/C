#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario=0;
    float salario_min=0;
    printf("Insira o salario minimo e o salario a ser comparado:\n");
    scanf("%f %f", &salario_min, &salario);
    printf("Essa pessoa recebe %.2f salarios minimos.", salario/salario_min);
    return 0;
}
