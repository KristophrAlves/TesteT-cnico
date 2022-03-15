/*Ler n números de teclado enquanto o número 0 não for digitado*/
#include <stdio.h>

int main(void)
{
    int num;
    do
    {
        printf("Digite um numero inteiro:");
        scanf("%f", &num);

    } while (num != 0);
    printf("Seu ultimo numero e igual a 0");

    return 0;
}