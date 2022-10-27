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
        if(num[i]%2==0)
           j++;
        i++;
    }
    printf("%d numeros pares\n", j);
    return 0;
}
