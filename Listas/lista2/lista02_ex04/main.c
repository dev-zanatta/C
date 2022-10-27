#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    printf("Insira o numero:\n");
    scanf("%d", &a);
    if(a>=0)
        printf("%d\n", 2*a);
    else if(a<0)
        printf("%d\n", 3*a);
    return 0;
}
