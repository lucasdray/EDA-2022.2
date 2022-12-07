#include <stdio.h>

// void flush_in() {
//     int ch;
//     do {
//         ch = fgetc(stdin);
//     } while (ch != EOF && ch != '\n');
// }

int main ()
{
    int n;
    scanf("%d", &n);
    while (n != 0){
        char vetor[20000];        
        int alice = 0,beto = 0;
//      flush_in();
        scanf(" %[^\n]s", vetor); 
        n = n * 2;   // multiplicando por 2 pois espaço ocupa char '\0'
        for(int cont = 0; cont<n; cont++)
        
        {
               
               
            if (vetor[cont] == '0') alice++;
            if (vetor[cont] == '1') beto++;
            
            
        }
        printf("Alice ganhou %d e Beto ganhou %d\n", alice, beto);
        scanf("%d", &n);
    }

    


    








// 0 0 1 0 1
}