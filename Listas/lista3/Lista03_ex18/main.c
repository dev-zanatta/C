#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd=0, i=0;
    float nota1=0, nota2=0;
    printf("Insira a quantidade de alunos\n");
    scanf("%d", &qtd);
    while(i<qtd)
    {
        printf("Insira as notas do aluno\n");
        scanf("%f %f", &nota1, &nota2);
        if((nota1+nota2)/2>=6)
            printf("Aprovado\n");
        else
            printf("Reprovado\n");
        i++;
    }
    printf("\n");
    return 0;
}
