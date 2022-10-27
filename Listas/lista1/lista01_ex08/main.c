#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota_a=0, nota_b=0, nota_c=0;
    printf("Insira as notas do aluno em sequencia:\n");
    scanf("%f %f %f", &nota_a, &nota_b, &nota_c);
    float media = ((nota_a*1)+(nota_b*2)+(nota_c*3))/6;
    printf("A media do aluno foi de %.2f .", media);
    return 0;
}
