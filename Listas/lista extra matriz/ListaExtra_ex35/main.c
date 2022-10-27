/*Fac¸a um programa que leia dois n´umeros a e b (positivos menores que 10000) e:
* Crie um vetor onde cada posic¸ ˜ao ´e um algarismo do n´umero. A primeira posic¸ ˜ao ´e
o algarismo menos significativo;
* Crie um vetor que seja a soma de a e b, mas fac¸a-o usando apenas os vetores
constru´ıdos anteriormente.
Dica: some as posic¸ ˜oes correspondentes. Se a soma ultrapassar 10, subtraia 10 do
resultado e some 1 `a pr ´oxima posic¸ ˜ao..*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, unidade=0, dezena=0, centena=0, milhar=0, dezmilhar=0, unidade2=0, dezena2=0, centena2=0, milhar2=0, dezmilhar2=0;
    scanf("%d %d", &a, &b);
    unidade=a%10;
    unidade2=b%10;
    a-=unidade;
    b-=unidade2;
    dezena=a/10;
    dezena2=b/10;
    while((dezena>10 || centena>10 || milhar>10)||(dezena2>10 || centena2>10 || milhar2>10))
        {
        if(dezena>10)
            {
                dezena-=10;
                centena++;
            }
        if(centena>10)
            {
                centena-=10;
                milhar++;
            }
        if(milhar>10)
            {
                milhar-=10;
                dezmilhar++;
            }
        if(dezena2>10)
            {
                dezena2-=10;
                centena2++;
            }
        if(centena2>10)
            {
                centena2-=10;
                milhar2++;
            }
        if(milhar2>10)
            {
                milhar2-=10;
                dezmilhar2++;
            }
        }

    int vet1[5], vet2[5], vet3[5];
    vet1[0]=dezmilhar;
    vet1[1]=milhar;
    vet1[2]=centena;
    vet1[3]=dezena;
    vet1[4]=unidade;

    vet2[0]=dezmilhar2;
    vet2[1]=milhar2;
    vet2[2]=centena2;
    vet2[3]=dezena2;
    vet2[4]=unidade2;

    for(int i=0;i<5;i++)
    {
        vet3[i]=vet1[i]+vet2[i];
        if(vet3[i]>10)
        {
            vet3[i]-=10;
            vet3[i+1]+=1;
        }
    }
    printf("\n\n%d", vet3[0]*10000+vet3[1]*1000+vet3[2]*100+vet3[3]*10+vet3[4]*1);
}

