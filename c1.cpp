/*Dado um código em python imprimir o endereço de memória de ao menos 5 variaveis*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 12;
    int b = 13;
    int c = 1;
    int d = 7;
    int e = 4;

    printf("primeira variavel = %x\n", &a);
    printf("segundo variavel = %x\n", &b);
    printf("terceiro variavel = %x\n", &c);
    printf("quarta variavel = %x\n", &d);
    printf("quinta variavel = %x\n", &e);

    return EXIT_SUCCESS;
}