#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idades[21]={0};
    int i=0;
    float media=0;
    while(i<20)
    {
        scanf("%d", &idades[i]);
        i++;
    }
    i=0;
    while(i<20)
    {
        media=media+idades[i];
        i++;
    }

    printf("%.2f\n", media/20);
    return 0;
}
