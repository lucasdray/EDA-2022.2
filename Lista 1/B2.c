#include <stdio.h>
int main(void)
{
    int n,x,soma,cont;
    soma = 0;
    cont = 0;
    scanf("%d", &n);
    while(cont != n)
    {
        scanf("%d", &x);
        soma += x;
        cont++;
    }
    printf("%d", soma);
}