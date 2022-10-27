#include <stdio.h>
#include <stdlib.h>

int main()
{
    float prato=0, bebida=0, total=0;



    do
    {
        printf("Insira o peso do prato e o gasto com bebidas\n");
        scanf("%f %f", &prato, &bebida);
        total+=bebida+(prato*23.59);
    }while(prato>0 && bebida>0);
    printf("A conta ficou em %.2f", total);
    return 0;
}
