#include <stdio.h>

int main()
{
    /*1 - Faça a representação simbólica da memória do
    sistema para as variáveis definidas no programa
    contido no arquivo tipo_int.c */

    // Conteúdo do arquivo tipo_int.c
    int temperatura = 20;
    temperatura = -10;
    unsigned int idade = 30;
    idade = 40;
    printf("%d %d\n", temperatura, idade);
    printf("%zu\n", sizeof(int));

    // Representação simbólica da memória -> ponteiro
    printf("******\n");

    int *ptr_temperatura;
    ptr_temperatura = &temperatura;

    unsigned int *ptr_idade;
    ptr_idade = &idade;

    printf("- Endereco da temperatura: %p\n", &ptr_temperatura);
    printf("- Valor apontado pelo ponteiro da temperatura: %d\n", *ptr_temperatura);
    printf("- Endereco da idade: %p\n", &ptr_idade);
    printf("- Valor apontado pelo ponteiro da idade: %d\n", *ptr_idade);

    return 0;
}
