#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, i=0, j=0, k=0, l=0;
    while(i<20)
    {
        scanf("%d", &a);
        if(a>=0 && a<=100)
            j++;
        else if(a>=101 && a<=200)
            k++;
        else if(a>=200)
            l++;
        i++;
    }
    printf("%d entre 0 e 100, %d entre 101 e 200, e %d maiores que 200\n", j, k, l);
    return 0;
}
