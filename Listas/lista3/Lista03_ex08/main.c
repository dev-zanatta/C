#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[10][30]={0};
    int idades[11]={500};
    int i=0, y=0;

    while(i<10)
    {
        scanf("%s %d", &nome[i][0], &idades[i]);
        i++;
    }

    i=0;
    int menor=idades[0];
    while(i<10)
    {
        if(idades[i]<menor)
        {
            menor=idades[i];
            y=i;
        }
        i++;
    }
    printf("A menor idade e %d do(a) %s", menor, nome[y]);
}
