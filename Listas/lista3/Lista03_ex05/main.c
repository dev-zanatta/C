#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[11];
    int i=0;
    printf("Entre com 10 numeros\n");
    while(i<10)
    {
        scanf("%d", &vet[i]);
        i++;
    }
    int total=0;
    i=0;
    while(i<10)
    {
        total=total+vet[i];
        i++;
    }

    printf("%d\n", total);
    return 0;
}
