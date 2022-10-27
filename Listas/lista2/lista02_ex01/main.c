#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a=0, b=0;
    printf("Insira os valores:\n");
    scanf("%f %f", &a, &b);
    if(a>b)
        printf("A e maior\n");
    else if(a<b)
        printf("B e maior\n");
    else
        printf("A e B sao iguais");

    return 0;
}
