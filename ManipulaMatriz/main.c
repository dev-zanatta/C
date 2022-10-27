#include <stdio.h>
#include <stdlib.h>
/*Leia 2 matrizes, e faca funcoes para:
-calcular a media de uma matriz
-somar 2 matrizes e retornar uma 3a*/
void preenche_ij(int mat[10][10])//preenche a matriz com i+j
{
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            mat[i][j]=i+j;
}

void preenche_1(int mat[10][10])//preenche a matriz com 1
{
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            mat[i][j]=1;
}

void preenche(int mat[10][10])//preenche manualmente com entrada do usuario
{
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            scanf("%d", &mat[i][j]);
}

int media(int mat[10][10])
{
    int soma=0;
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            soma+=mat[i][j];
    float media=soma/100;
    return media;
}

void soma(int matA[10][10], int matB[10][10], int matSoma[10][10])
{
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            matSoma[i][j]=matA[i][j]+matB[i][j];
}

int main()
{
    int matA[10][10], matB[10][10], matSoma[10][10];
    preenche_ij(matA);
    //preenche_ij(matB);
    //preenche_1(matA);
    preenche_1(matB);
    //preenche(matA);
    //preenche(matB);
   
    float med=media(matA);
    printf("\n a media da matriz A e %.2f", med);

    printf("\n\nmatriz a\n\n");
    for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(matA[i][j]<10)
                {
                    printf("0%d ", matA[i][j]);
                }
                else
                {
                    printf("%d ", matA[i][j]);
                }
            }
            printf("\n");
        }
    printf("\n\nmatriz b\n\n");
    for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(matB[i][j]<10)
                {
                    printf("0%d ", matB[i][j]);
                }
                else
                {
                    printf("%d ", matB[i][j]);
                }
            }
            printf("\n");
        }
    printf("\n\nmatriz soma\n\n");
    soma(matA,matB,matSoma);

    for(int i=0;i<10;i++)
        {
        for(int j=0;j<10;j++)
            {
                if(matSoma[i][j]<10)
                {
                    printf("0%d ", matSoma[i][j]);
                }
                else
                {
                    printf("%d ", matSoma[i][j]);
                }
            }
            printf("\n");
        }
    return 0;
}
