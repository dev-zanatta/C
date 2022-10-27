#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ra=0;
    float nota1=0, nota2=0, nota3=0, media=0;
    printf("Insira o RA do aluno e ,em seguida ,as 3 notas(de 0 a 10)\n");
    scanf("%d %f %f %f", &ra, &nota1, &nota2, &nota3);
    media=(nota1+nota2+nota3)/3;
    if(media>=7)
        printf("O aluno com o RA %d foi aprovado com media %.2f", ra, media);
    else if(media>5 && media<7)
        printf("O aluno com o RA %d ficou em recuperacao com media %.2f", ra, media);
    else
        printf("O aluno com o RA %d foi reprovado com media %.2f", ra, media);
    return 0;
}
