#include <stdio.h>

int main(void){

    unsigned int N,golA = 0,golB = 0, contpenaulti = 0;
    scanf("%d", &N);
    
    unsigned int chutesA = N, chutesB = N;
    char A[N+1], B[N+1];
    
    scanf("%s %s", A, B);

    for(unsigned i = 0; i<N; i++)
    {
        if (A[i] == 'o') golA++;
        contpenaulti++;
        chutesA--;
        if (golA + chutesA < golB || golB + chutesB < golA) break;

        if (B[i] == 'o') golB++;
        contpenaulti++;
        chutesB--;
        if (golA + chutesA < golB || golB + chutesB < golA) break;

        
    }

    if (golA == golB) printf("Empate\n");
    else printf("%d\n", contpenaulti);

    
}