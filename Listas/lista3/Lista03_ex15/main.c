#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, total=1;
    printf("Insira o numero \n");
    scanf("%d", &a);
    while(a>0)
    {
        total*=a;
        a--;
    }
    printf("Total %d", total);
    return 0;
}
