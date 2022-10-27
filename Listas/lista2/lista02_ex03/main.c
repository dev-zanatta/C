#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, b=0;
    printf("Insira os numeros:\n");
    scanf("%d %d", &a, &b);
    if(a==b)
        printf("%d\n", a+b);
    else
        printf("%d\n", a*b);

    return 0;
}
