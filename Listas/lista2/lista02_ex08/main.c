#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco=0;
    char condicao=0;
    printf("Insira o preco de etiqueta do protudo e a condicao de pagamento(a, b, c ou d)\n");
    scanf("%f %c", &preco, &condicao);
    if(condicao=='a')
    {
        preco=preco*0.9;
        printf("O preco e %.2f",preco);
    }
    else if(condicao=='b')
    {
        preco=preco*0.85;
        printf("O preco e %.2f", preco);
    }
    else if(condicao=='c')
    {
        printf("Devera ser pago %.2f em 2x de %.2f", preco, preco/2);
    }
    else if(condicao=='d')
    {
        printf("Devera ser pago %.2f em 2x de %.2f", preco*1.1, (preco*1.1)/2);
    }
    else
        printf("Condicao de pagamento invalida\n");
    return 0;
}
