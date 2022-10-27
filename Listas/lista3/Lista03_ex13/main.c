#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, total=0;
    while(a>=0)
    {
        scanf("%d", &a);
        total+=a;
    }
    printf("%d\n", total);
    return 0;
}
