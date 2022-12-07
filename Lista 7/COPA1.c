#include <stdio.h>


void ganhador(char *rodada,unsigned int M,unsigned int N,unsigned int i)
{
    if (M>N) rodada[i] = rodada[2 * i];
    else rodada[i] = rodada[2 * i + 1];

}
int main(void){
    unsigned int M,N,i;
    char rodada[9];

    //oitavas
    for (i = 0; i < 8; i++)
    {
        scanf("%d %d",&M,&N);
        if (M>N) rodada[i] = 'A' + (2 * i);
        else rodada[i] = 'B' + (2 * i);

        
    }
    //quartas
    for (i = 0; i < 4; i++)
    {
        scanf("%d %d",&M,&N);
        ganhador(rodada,M,N,i);


        
    }
    //semi final
    for (i = 0; i < 2; i++)
    {
        scanf("%d %d",&M,&N);
        ganhador(rodada,M,N,i);


        
    }
    // final
    scanf("%d %d",&M,&N);
    if (M>N) printf("%c", rodada[0]);
    else printf("%c", rodada[1]);

}