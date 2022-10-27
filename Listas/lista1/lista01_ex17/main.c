#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp=0;
    printf("Insira a temperatura em Celsius:\n");
    scanf("%f", &temp);
    temp=(temp*1.8)+32;
    printf("A temperatura em graus Fahrenheit e %.2f", temp);
    return 0;
}
