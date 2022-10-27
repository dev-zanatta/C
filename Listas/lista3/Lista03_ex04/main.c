#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[20];
    int a=0;
    scanf("%s %d", &nome, &a);
    int i=0;
    while(i<=a)
    {
        printf("%s\n", nome);
        i++;
    }
    return 0;
}
