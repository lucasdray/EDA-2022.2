#include <stdio.h>

int fx(char *ponteiro)
{
    if (*ponteiro == '\0') return;
    if(*ponteiro == 'x'){
        // &ponteiro[1] == ponteiro + 1

        fx(&ponteiro[1]);
        printf("%c", *ponteiro);

    }
    else{  
        printf("%c", *ponteiro);
        fx(&ponteiro[1]);
    }
}

int main()
{
    char input[101];
    scanf("%s", input);
    fx(input);
}