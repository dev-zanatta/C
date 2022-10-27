#include <stdio.h>
#include <stdlib.h>

int main()
{
    int B=0, b=0, h=0;
    printf("Insira a base maior, base menor e a altura:\n");
    scanf("%d %d %d", &B, &b, &h);
    printf("A area do trapezio e de %d", ((B+b)*h)/2);
    printf("\n");
    return 0;
}
