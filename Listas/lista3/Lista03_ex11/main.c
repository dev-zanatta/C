#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, i=0, j=0;
    while(i<20)
    {
        scanf("%d", &a);
        if(a>=0 && a<=100)
            j++;
        i++;
    }
    printf("%d entre 0 e 100\n", j);
    return 0;
}
