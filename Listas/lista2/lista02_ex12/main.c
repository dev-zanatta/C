#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x=0, y=0, z=0;
    printf("Insira os tres lados a serem analisados:\n");
    scanf("%f %f %f", &x, &y, &z);
    if(x+y>z && x+z>y && z+y>x)
    {
        if(x==y && x==z)
            printf("E um triangulo equilatero\n");
        else if(x==y || x==z || y==z)
            printf("E um triangulo isosceles\n");
        else if(x!=y && x!=z && y!=z)
            printf("E um triangulo escaleno\n");
    }
    else
    printf("Nao pode ser formado um triangulo.");
    return 0;
}
