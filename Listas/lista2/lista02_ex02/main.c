#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    printf("Insira o numero:\n");
    scanf("%d", &a);
    if(a%2==0)
        printf("O numero e par");
    else
        printf("O numero e impar");

    return 0;
}
