#include <stdio.h>
#include <stdbool.h>

int main()
{
    /*3 - Faça a representação simbólica da memória do
    sistema para as variáveis definidas no programa
    contido no arquivo tipo_bool.c
    */

   // Conteúdo de tipo_bool.c
    bool frio = true;
    bool calor = false;
    
    printf("- Valor da variável frio: %d\n", frio);
    printf("- Valor da variável calor: %d\n", calor);

    // Representação simbólica da memória usando ponteiros
    printf("******\n");

    bool *ptr_frio;
    ptr_frio = &frio;
    bool *ptr_calor;
    ptr_calor = &calor;

    printf("- Endereco da variavel frio: %p\n", &ptr_frio);
    printf("- Valor apontado pelo ponteiro da variavel frio: %d\n", *ptr_frio);
    printf("- Endereco da variavel calor: %p\n", &ptr_calor);
    printf("- Valor apontado pelo ponteiro da variavel calor: %d\n", *ptr_calor);

    return 0;
}
