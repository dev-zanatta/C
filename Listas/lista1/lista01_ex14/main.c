#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio = 0;
    printf("insira o raio R da pizza\n");
    scanf("%f", &raio);
    float area = raio*raio*3.14;
    printf("A area dessa pizza e de %.2f", area);
    return 0;
}
