#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, b=0, i=0;
    int soma=0;
    scanf("%d %d", &a, &b);
    while(a<=b)
    {
        soma=soma+a;
        a++;
    }
    printf("%d\n", soma);
    return 0;
}
