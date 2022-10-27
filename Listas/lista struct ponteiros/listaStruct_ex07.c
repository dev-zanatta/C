#include <stdio.h>
#include <stdlib.h>
/*Escreva uma função chamada teste que recebe um valor n passado por valor e dois inteiros b e k
passados por “referência". Sua função deve retornar em b e k valores tal que bk = n e b seja o menor
possível.*/

int teste(int n, int *b, int *k)
{
    int achou=0;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i*j==n)
                {
                    achou=1; 
                    *b=i;
                    *k=j;   
                    return 0;
                }
        }
    }
}

int main()
{
    int n, b, k;
    printf("Insira n\n");
    scanf("%d", &n);
    teste(n, &b, &k);
    printf("%d * %d = %d\n", b, k, n);
    return 0;
}