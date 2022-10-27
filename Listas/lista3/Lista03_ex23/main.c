#include <stdio.h>
#include <stdlib.h>

int main()
{
    int casas=0, i=0, canal=0, pessoa=0, j=0, aux=0, totalaud=0;
    int canais[6]={0};
    printf("Informe a quantidade de casas que vao participar da pesquisa:\n");
    scanf("%d", &casas);

    while(i<casas)
    {
        j=0;
        printf("Informe o numero de moradores na casa:\n");
        scanf("%d", &pessoa);
        while(j<pessoa)
        {
            printf("Informe o canal e quantas pessoas estao assistindo esse canal:\n");
            scanf("%d %d", &canal, &aux );
            if(j+aux>pessoa)
                {
                    printf("Quantidade invalida\n");
                }
            else
                {
                switch(canal)
                {
                case 3:
                    canais[0]+=aux;
                    break;
                case 5:
                    canais[1]+=aux;
                    break;
                case 8:
                    canais[2]+=aux;
                    break;
                case 11:
                    canais[3]+=aux;
                    break;
                case 13:
                    canais[4]+=aux;
                    break;
                default:
                    printf("Opcao invalida.\n");
                }
                j=j+aux;
                }
        }
        i++;
    }
    totalaud=canais[0]+canais[1]+canais[2]+canais[3]+canais[4];
    printf("Audiencias:\n");
    printf("Canal 3 %.2f%%\n",  ((float)canais[0]/totalaud)*100);
    printf("Canal 5 %.2f%%\n",  ((float)canais[1]/totalaud)*100);
    printf("Canal 8 %.2f%%\n",  ((float)canais[2]/totalaud)*100);
    printf("Canal 11 %.2f%%\n", ((float)canais[3]/totalaud)*100);
    printf("Canal 13 %.2f%%\n", ((float)canais[4]/totalaud)*100);
    return 0;
}


