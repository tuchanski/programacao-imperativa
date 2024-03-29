#include <stdio.h>

int main()
{
    /*2 - Faça a representação simbólica da memória do
    sistema para as variáveis definidas no programa
    contido no arquivo tipo_char.c
    */

   // Conteúdo de tipo_char.c

    char letra = 'A';
    printf("%c\n", letra);
    printf("%d\n", letra);
    letra = letra + 1;
    printf("%c\n", letra);
    printf("%d\n", letra);
    letra = letra / 2;
    printf("%c\n", letra);
    printf("%d\n", letra);

    // Representação simbólica da memória -> ponteiro

    printf("******\n");

    char *ptr_letra;
    ptr_letra = &letra;

    printf("- Endereco da variavel letra: %p\n", &ptr_letra);
    printf("- Valor apontado pelo ponteiro da variavel letra: %c\n", *ptr_letra);
    
    return 0;
}
