/*- alocar dinamicamente o espaço a cada número novo inserido
- navegar o vetor criado usando notação de ponteiro ou notação de vetor
- mostrar os valores capturados do teclado*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam;
    scanf("%d", &tam);

    int *v = (int *)malloc(sizeof(tam));

    int i;
    for (i = 0; i < tam; i++)
    {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < tam; i++)
    {
        printf("%d ", v[i]);
    }

    free(v);
    return 0;
}