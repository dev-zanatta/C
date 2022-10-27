#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a=0;
    printf("Insira o numero:\n");
    scanf("%d", &a);
    if(a%2==0)
        printf("%d\n", a+5);
    else
        printf("%d\n", a+8);
    return 0;
}
