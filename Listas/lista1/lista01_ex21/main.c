#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lata=0, garrafa=0, garrafa_g=0;
    printf("Insira a quantidade de latas de 350ml, garrafas de 600ml e garrafas de 2 litros que foram comprados, respectivamente\n");
    scanf("%d %d %d", &lata, &garrafa, &garrafa_g);
    float total_litros= lata*350+garrafa*600+garrafa_g*2000;
    printf("Foram comprados %.2f litros de refrigerante", total_litros/1000);
    printf("\n");
    return 0;
}
