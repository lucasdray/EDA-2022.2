#include <stdio.h>
#include <string.h>

int main(void){

    char linha[4];
    int contador_sim = 0, separador = 0, ntriagem = 0;

    while(scanf("%s", linha) != EOF){
        separador++;

        if (strcmp(linha, "sim") == 0) contador_sim++;
        if (separador == 10){
            if (contador_sim >= 2) ntriagem++;
            contador_sim = 0;
            separador = 0;
        }
        
        

    }
    printf("%d\n", ntriagem);
}