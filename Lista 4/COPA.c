#include <stdio.h>

int main(void){
    int T,N,pontos;
    char time[11];

    while (scanf("%d %d", &T, &N) >= 2 && T != 0)
    {
        int somapontos = 0, maxpontos;
        maxpontos = N * 3;
        for (int i = 0; i < T; i++)
        {
            scanf("%s %d", time, &pontos);
            somapontos += pontos;
        }
        
        printf("%d\n", maxpontos - somapontos);
        




    
    }
    


}