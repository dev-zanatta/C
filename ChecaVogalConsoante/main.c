#include <stdio.h>
#include <stdlib.h>
//Conta a quantidade de vogais e consoantes em um texto.
int checa_vogal(char str[]){
    int vogal=0;
    for(int i=0;i<strlen(str);i++)
        {
            if(str[i]== 'A' ||str[i]== 'a' || str[i]== 'E' ||  str[i]== 'e' || str[i]== 'I' ||  str[i]== 'i' ||  str[i]== 'O' || str[i]== 'o' || str[i]== 'U' || str[i]== 'u')
                vogal++;
        }
    return vogal;
}

int checa_cons(char str[]){
    int conso=0;
    for(int i=0;i<strlen(str);i++)
        {
            if( ((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)) && str[i]!='a' && str[i]!='e' && str[i]!='i' &&str[i]!='o'&&str[i]!='u' && str[i]!='A' && str[i]!='E' && str[i]!='I' &&str[i]!='O'&&str[i]!='U')
                conso++;
        }
    return conso;
}

int main()
{
    char str[200];
    printf("Insira uma frase:\n");
    gets(str);
    int cons=0, vog=0;
    cons=checa_cons(str);
    vog=checa_vogal(str);
    printf("%d vogais \n%d consoantes\n", vog, cons);

    return 0;
}
