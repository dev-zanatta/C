#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int N = 0;
    scanf("%d", &N);
    int i = 0;
    int guarda[11]={0};
    for(i=0; i<N; i++)
    {
        unsigned long long int calculo=0;
        int k=0;
        char palavra[100] = "";
        scanf("%s", palavra);
        for(int i=0;i<strlen(palavra);i++)
        {
            calculo += ((palavra[k]-'A')*(pow(26, k)));
            k++;
        }
        int aux=0;
        aux=(calculo%11);
        guarda[aux]+=1;
    }
    int j=0;
    while(j<11)
        {
        printf("\n%d :%d ", j, guarda[j]);
        j++;
        }
}
