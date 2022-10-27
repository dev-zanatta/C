#include <stdio.h>
#include <stdlib.h>

int main()
{
    int veta[10]={1,23,13,51,31,53,25,12,54,37};
    int vetb[10]={12,51,122,31,43,53,12,67,90,13};
    int vetc[10];
    for (int i=0; i<10; i++)
    {
        vetc[i]=veta[i]+vetb[i];
    }
    for (int i=0; i<10; i++)
    {
        printf("%d ", vetc[i]);
    }
    return 0;
}
