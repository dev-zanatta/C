#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km=0, totalkm=0;
    do
    {
        printf("Informe a kilometragem rodada\n");
        scanf("%f", &km);
        totalkm+=km;
    }while(totalkm<=4000);
    printf("Voce rodou %.2f kilometros.", totalkm);
    return 0;
}
