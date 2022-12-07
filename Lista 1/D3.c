#include <stdio.h>

int main(void){
    int dia = 0, lerAvaliacao, quantidadeRestaurante, maiorAvaliacao;
    long int codigoRestaurante, lerRestaurante;

    while (scanf("%d", &quantidadeRestaurante) != EOF){
        dia++;
        maiorAvaliacao = -1;
        for (int i = 0; i < quantidadeRestaurante; i++)
        {
            scanf("%ld %d", &lerRestaurante, &lerAvaliacao);
            if (lerAvaliacao > maiorAvaliacao)
            {
                maiorAvaliacao = lerAvaliacao;
                codigoRestaurante = lerRestaurante;
            }
            if (lerAvaliacao == maiorAvaliacao){
                if (lerRestaurante < codigoRestaurante) codigoRestaurante = lerRestaurante;

            }
            

        }
        
        
        printf("Dia %d\n", dia);
        printf("%ld\n\n", codigoRestaurante);
    }



}