#include <stdio.h>
#include <stdlib.h>
/*Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a m´edia dos valores.*/
int main()
{
    int vet[5], maior, menor;
    float media=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d", &vet[i]);
        media+=vet[i];
    }
    maior=vet[0];
    menor=vet[0];
    for(int i=0;i<5;i++)
    {
        if(vet[i]>maior)
            maior=vet[i];

        if(vet[i]<menor)
            menor=vet[i];
    }

    printf("Media = %.2f\nMaior = %d\nMenor = %d\n", media/5, maior, menor);

    return 0;
}
