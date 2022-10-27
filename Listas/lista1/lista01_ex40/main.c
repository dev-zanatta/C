#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float cateto_a=0, cateto_b=0;
    float hipo = 0;
    printf("Insira os dois catetos:\n");
    scanf("%f %f", &cateto_a, &cateto_b);
    hipo = sqrt(pow(cateto_a,2) + pow(cateto_b,2));
    printf("A hipotenusa e %.2f", hipo);
    return 0;
}
