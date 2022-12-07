#include <stdio.h>

int main(void){
    int soma = 0, numero, soma_aparecido;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &numero);
        soma += numero;
    }
    
    scanf("%d", &soma_aparecido);

    if(soma == soma_aparecido) printf("Acertou");

    else printf("Errou");






    
}