#include <stdio.h>

int main(void){
    int N,cont = 1, Jn, Zn, diferenca;
    scanf("%d", &N);

    while(N != 0){
        int J = 0,Z = 0;
        printf("Teste %d\n", cont);
        for (int i = 0; i < N; i++)
        {
            scanf("%d%d", &Jn, &Zn);  
            J = Jn + J;
            Z = Zn + Z;
            diferenca = J - Z;

            printf("%d\n", diferenca);
        }
        



        cont++;
        scanf("%d", &N);
    }








}