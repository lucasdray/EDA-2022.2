#include <stdio.h>

int somar(char *entrada, int soma){
    

    if (*entrada == '\0') return soma;
    else{

        soma += (entrada[0] - '0');
        return (somar(entrada+1, soma));
    }

}


int calcular_degree(int soma, int degree){

    if (soma > 9)
    {
        char teste[1001];
        sprintf(teste, "%d", soma);
        soma = somar(teste,0);
        return calcular_degree(soma,degree+1);

        
    }
    if (soma == 9) return degree;
    else return 0;
}

int main()
{

    char entrada[1001];
    scanf("%s", entrada);
    while (*entrada != '0')
    {
        int soma,degree = 1;
        soma = somar(entrada,0);        
        degree = calcular_degree(soma,degree);

        if(soma % 9 == 0) printf("%s is a multiple of 9 and has 9-degree %d.\n", entrada, degree);

        else printf("%s is not a multiple of 9.\n", entrada);
        scanf("%s", entrada);
    }
}
    

