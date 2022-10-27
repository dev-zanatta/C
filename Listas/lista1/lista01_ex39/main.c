#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salario=1200;
    int c1=200, c2=120;
    int multa= c1*0.02 + c2*0.02;
    printf("Restara %d do salario de Joao\n", salario-c1-c2-multa);
    return 0;
}
