#include <stdio.h>
#include <string.h>

/*8.1 Elabore um programa em C para concatenar duas cadeias de caracteres (A e B)
lidas do teclado. Ao final imprima as duas cadeias e a cadeia resultante. Use a função
strcat, da biblioteca string.h.*/

#define SIZE 99

int main(int argc, char const *argv[])
{
    char palavra [SIZE];
    char palavra_secundaria [SIZE];

    printf("\n- Entre uma string: ");
    scanf("%s", palavra);
    printf("\n- Entre uma string: ");
    scanf("%s", palavra_secundaria);

    printf("\nStrings digitadas: %s e %s", palavra, palavra_secundaria);

    // Realizando a junção
    strcat(palavra, palavra_secundaria);
    printf("\nConcatenadas: %s", palavra);

    return 0;
}
