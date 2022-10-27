#include <stdio.h>
#include <stdlib.h>

int main()
{
    int veta[8]={1,3,6,12,13,14,5,13};
    int vetb[8];
    for (int i=0; i<8; i++)
    {
        vetb[i]=2*veta[i];
    }
    for (int i=0; i<8; i++)
    {
        printf("%d\n", vetb[i]);
    }
    return 0;
}
