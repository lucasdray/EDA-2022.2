#include <stdio.h>
#include <string.h>

int main(void){

    char linha[31],cont = 0;
    
    while(scanf("%s", linha) != EOF){
        if (strcmp(linha, "marte") == 0) cont++;
    }
    if (cont != 0) 
        printf("Leonardo Cicero Marciano\n");
    else 
        printf("none");
    

}