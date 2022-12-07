#include <stdio.h>
#include <string.h>

int main(void){
    int qtnd_linhas, linha, coluna_inicial;
    char matriz[1001][1001], comando, caractere_atual;
    scanf("%d", &qtnd_linhas);

    for (int i = 0; i < qtnd_linhas; i++)
    {
        scanf(" %[^\n]s", matriz[i]); 
    }
    scanf("%d %d", &linha, &coluna_inicial);

    linha--;
    coluna_inicial--;

    int coluna_atual;

    while (scanf(" %c", &comando) != EOF)
    {
    
        // j desce
        if(comando == 'j'){
            if(linha != qtnd_linhas - 1) linha++;

            
            

        }
        // k sobe
        if(comando == 'k'){
            if(linha != 0) linha--;





        }

        if (strlen(matriz[linha]) - 1 < coluna_inicial) coluna_atual = strlen(matriz[linha]) - 1;
            else{

                coluna_atual = coluna_inicial;
            }

            caractere_atual = matriz[linha][coluna_atual];

        printf("%d %d %c\n", linha + 1, coluna_atual + 1, caractere_atual);
    }
    











}