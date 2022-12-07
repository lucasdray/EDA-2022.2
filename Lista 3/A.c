#include <stdio.h>

int f91(int N){

    if(N >= 101) return N - 10;
    else return f91(f91(N + 11));
    


}

int main(void){
    int numero;
    scanf("%d", &numero) ;
    while(numero != 0){
        printf("f91(%d) = %d\n", numero, f91(numero));
        scanf("%d", &numero);
    }

    return 0;
}