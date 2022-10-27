#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/*screva um programa que leia um n�umero inteiro positivo n e em seguida imprima n
linhas do chamado Triangulo de Pascal:*/
int main()
{
    int n;
    scanf("%d", &n);
    int mat[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            mat[i][j]=0;
    }

    for(int i=0;i<n;i++)
    {
        mat[i][0]=1;
    }
    for(int i=0;i<n;i++)
    {
        mat[i][i]=1;
    }

    for(int i=2;i<n;i++)
    {
        for(int j=1;j<n-1;j++)
        {
            mat[i][j] = mat[i-1][j] + mat[i-1][j-1];
        }

    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]!=0 && mat[i][j]<10)//alinhar numeros maiores que 10
                printf("%d  ", mat[i][j]);
            else if(mat[i][j]!=0 && mat[i][j]>9)//''menores que 10
                printf("%d ", mat[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

}
