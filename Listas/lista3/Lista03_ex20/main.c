#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, gato=0, cachorro=0, qtd=0;
    char animal[10]={0};
    printf("Insira a quantidade de animais:\n");
    scanf("%d", &qtd);
    while(i<qtd)
    {
        printf("Insira a especie do animal\n");
        scanf("%s", &animal);
        if(strcmp(animal, "gato")==0)
            {
                gato++;
                i++;
            }
        else if(strcmp(animal, "cachorro")==0)
            {
                cachorro++;
                i++;
            }
        else
            printf("Animal invalido\n");

    }
    printf("%d gato %d cachorro\n", gato, cachorro);
    return 0;
}
