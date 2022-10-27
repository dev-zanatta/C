#include <stdio.h>
#include <stdlib.h>
/*Faça uma função chamada primo que recebe como parâmetro um inteiro m e dois outros inteiros p1
e p2 passados por referência. A função deve retornar em p1 o maior número primo que é menor do
que m e deve retornar em p2 o menor número primo que é maior do que m.*/
int primo(int m, int *p1, int *p2)
{
    int maiorp=3, menorp=3;
    for(int i=m-1;i>=3;i--)//maior primo menor que m
    {
        int eprimo=0;
        for(int j=2;j<m/2;j++)
        {
            if(i%j==0)
                {
                    printf("nao e primo\n");
                    eprimo=1;   
                    break;
                }
        }
        if(eprimo==0)
        {
            maiorp=i;
            break;
        }
    }

    for(int i=m+1;;i++)//menor primo maior que n
    {
        int eprimo=0;
        for(int j=2;j<m/2;j++)
        {
            if(i%j==0)
                {
                    eprimo=1;   
                    break;
                }
        }
        if(eprimo==0)
            {
                menorp=i;
                break;
                //return 0;
            }
    }
    *p1=maiorp; 
    *p2=menorp;
    printf("maior %d menor %d\n", maiorp, menorp);                
}
int main()
{
    int m, p1, p2;
    printf("Insira m\n");
    scanf("%d", &m);
    primo(m, &p1, &p2);
    printf("m %d\np1 %d\np2 %d\n", m, p1, p2);
}