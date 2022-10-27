#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int xa=0, ya=0;
    int xb=0, yb=0;
    printf("Insira o X e o Y da primeira coordenada:\n");
    scanf("%d %d", &xa, &ya);
    printf("Insira o X e o Y da segunda coordenada:\n");
    scanf("%d %d", &xb, &yb);
    int cateto_a = xa-xb;
    int cateto_b = ya-yb;
    float distancia = pow(cateto_a,2)+ pow(cateto_b,2);
    printf("A distancia e de %f", sqrt(distancia));
    return 0;
}
