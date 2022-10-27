#include <stdio.h>
#include <stdlib.h>
//Faca um programa que imprima todas as tabuadas ate o 10
void tabuada(int n)
{
    for(int i=0;i<11;i++)
    {
        printf("%d * %d = %d\n",n, i, i*n);
    }
    printf("\n");
}

void tabuadas()
{
    for(int n=1;n<11;n++)
    {
        tabuada(n);
    }
}

int main()
{
    tabuadas();
    return 0;
}
