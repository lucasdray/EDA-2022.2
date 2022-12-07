#include <stdio.h>

int main(void){
    int soma = 0, numero, soma_aparecido,n;
    scanf("%d", &n);   
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numero);
        soma += numero;
    }
    
    scanf("%d", &soma_aparecido);

    if(soma == soma_aparecido) printf("Acertou");

    else printf("Errou");






    
}