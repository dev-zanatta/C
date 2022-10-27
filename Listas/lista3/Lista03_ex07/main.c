#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idades[21]={0};
    int i=0, j=0;
    float media=0;
    while(i<20)
    {
        scanf("%d", &idades[i]);
        i++;
    }
    i=0;
    while(i<20)
    {
        if(idades[i]>=18)
            j++;
            i++;
    }
    printf("%d pessoas sao maiores de idade", j);
}
