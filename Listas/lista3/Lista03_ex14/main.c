#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char resp[5];
    printf("Ola tudo bem?\n");
    scanf("%s", &resp);
    while(strcmp(resp, "Sim")==0 || strcmp(resp, "sim")==0)
    {
        printf("Ola tudo bem?\n");
        scanf("%s", &resp);
    }
    return 0;
}
