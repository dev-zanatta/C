#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabuada=0;
    printf("Insira o numero para a tabuada ser realizada:\n");
    scanf("%d", &tabuada);
    int i=0;
    while(i<11)
    {
        printf("%d x %d :%d \n", tabuada, i ,tabuada*i);
        i++;
    }
    return 0;
}
