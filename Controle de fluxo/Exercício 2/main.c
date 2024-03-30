#include <stdio.h>

int main()
{
    /*2 - Escreva um programa na linguagem C que, dadas três letras distintas fornecidas pelo
    usuário (via teclado), imprima-as em ordem alfabética. Obs: o programa deve certificar-se de
    que as três letras sejam distintas */

    char a, b, c;

    printf("- Entre uma letra: ");
    a = getchar();
    getchar(); // Descarta o caractere de quebra de linha

    printf("- Entre outra letra: ");
    b =getchar();
    getchar(); // Descarta o caractere de quebra de linha

    printf("- Entre mais uma letra: ");
    c  = getchar();

    // Comparando caracteres

    if (a > b){
        char temp = b;
        b = a;
        a = temp;
    }
    if (a > c){
        char temp = c;
        c = a;
        a = temp;
    }
    if (b > c){
        char temp = c;
        c = b;
        b = temp;
    }

    printf("%c, %c, %c", a, b, c);
    return 0;
}
