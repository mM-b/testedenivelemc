#include <stdio.h>
void inverte(int vetor[], int size)
{
    int i;
    int aux[size];
    for (i = 0; i < size; i++)
    {
        aux[i] = vetor[i];
    }
    for (i = 0; i < size; i++)
    {
        vetor[i] = aux[size - 1 - i];
    }
    for (i = 0; i < size; i++)
    {
        printf("%d\n", vetor[i]);
    }
}
int main(void)
{
    int vetor[5] = {1, 2, 3, 4, 5};
    inverte(vetor, 5);
    return 0;
}
