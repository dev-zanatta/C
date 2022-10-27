#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, b=0;
    printf("Insira os dois valores:\n");
    scanf("%d %d", &a, &b);
    if(a>b)
        printf("A diferenca e %d", a-b);
    else
        printf("A diferenca e %d", b-a);
    return 0;
}
