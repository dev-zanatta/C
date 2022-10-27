#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c=1;
    FILE *file = fopen("arq1.txt", "w+");
    if(file==NULL)
        {
        printf("Erro\n");
        return 1;
        }
    else
        printf("Arquivo criado\n");
    while(c!='0')
        {
            scanf("%c", &c);
            if(c!='0')
                fprintf(file , "%c", c);
            fflush(stdin);
        }
    rewind(file);
    while(fscanf(file, "%c", &c)!=EOF)
    {
        printf("%c", c);
    }
    printf("Vai fechar\n");
    fclose(file);
    return 0;
}
