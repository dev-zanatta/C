#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, j=0;
    int num[21]={0};
    while(i<20)
    {
        scanf("%d", &num[i]);
        i++;
    }
    i=0;
    while(i<20)
    {
        if(num[i]>8)
           j++;
        i++;
    }
    printf("%d numeros maiores que 8\n", j);
    return 0;
}
