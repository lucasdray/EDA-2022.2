#include <stdio.h>

int somar(int soma){
    char n;
    scanf(" %c",&n);
    if (n == '\0') return soma;
    else{
        soma += (n - '0');
        return somar(soma);
    }
    

}



int main(void){
    int soma = 0;

    printf("%d",somar(soma));
    
   


}