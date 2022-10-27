#include <stdio.h>
#include <stdlib.h>
//Faca um programa que calcule o dia da Pascoa do ano que o usuario digitar
int main()
{
    printf("Insira o ano para calcular a data:\n");
    int g=0, y=0, c=0, x=0, z=0, e=0, n=0, d=0, mes=0;
    scanf("%d", &y);
    g=(y%19)+1;
    c=(y/100)+1;
    x=((3*c)/4)-12;
    z=((8*c)+5)/25-5;
    e=(((11*g) + (20) + (z) - (x))%30);

    if(((e==25) && (g>11)) || (e==24))
        e++;

    n=44-e;
    if(n<21)
        n+=30;
    d=((5*y)/4)-(x+10);
    n=(n+7)- ((d+n)%7);
    if(n>31)
    {
        n-=31;
        printf("Pascoa no ano %d: %d de abril\n", y, n);
    }
    else
    {
        printf("Pascoa no ano %d: %d de marco\n", y, n);
    }
    return 0;
}
