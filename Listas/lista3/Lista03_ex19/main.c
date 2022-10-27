#include <stdio.h>
#include <stdlib.h>

int main()
{
    float menor=500000, maior=0, altura=0;
    int i=0;
    while(i<5)
    {
        scanf("%f", &altura);
        if(altura<menor)
            menor=altura;
        else if(altura>maior)
            maior=altura;
        i++;
    }
        printf("maior %.2f menor %.2f", maior, menor);
    printf("\n");
    return 0;
}
