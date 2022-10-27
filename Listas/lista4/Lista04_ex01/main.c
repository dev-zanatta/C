#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet1[10];
    int vet2[10];
    int vet3[10];
    for (int i=0; i<10; i++)
    {
        scanf("%d", &vet1[i]);
    }
    for (int i=0; i<10; i++)
    {
        scanf("%d", &vet2[i]);
    }
    for (int i=0; i<10; i++)
    {
        vet3[i]=vet1[i]+vet2[i];
    }
    for (int i=0; i<10; i++)
    {
        printf("\n%d ", vet3[i]);
    }
    return 0;
}
