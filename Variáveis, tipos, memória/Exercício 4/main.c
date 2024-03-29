#include <stdio.h>
#include <stdbool.h>

int main()
{
    /*4 - Estenda o programa a seguir com a inclusão de um
    ponteiro para cada uma das variáveis (a, b, c, d)
    definidas na função
    main. Imprima os endereços de
    todas as variáveis e o conteúdo (valor) apontado por
    cada ponteiro. */

    short a = 10;
    double b = 45.9;
    char c = '$';
    bool d = true;

    // Representação simbólica da memória usando ponteiros
    
    short *ptr_a;
    ptr_a = &a;
    double *ptr_b;
    ptr_b = &b;
    char *ptr_c;
    ptr_c = &c;
    bool *ptr_d;
    ptr_d = &d;

    // Printando endereço de todas as variáveis
    printf("******\n");
    printf("- Endereco de a: %p\n", &ptr_a);
    printf("- Endereco de b: %p\n", &ptr_b);
    printf("- Endereco de c: %p\n", &ptr_c);
    printf("- Endereco de d: %p\n", &ptr_d);
    // Printando valor apontado por cada ponteiro
    printf("******\n");
    printf("- Valor apontado pelo ponteiro da variavel a: %u\n", *ptr_a);
    printf("- Valor apontado pelo ponteiro da variavel b: %lf\n", *ptr_b);
    printf("- Valor apontado pelo ponteiro da variavel c: %c\n", *ptr_c);
    printf("- Valor apontado pelo ponteiro da variavel d: %d\n", *ptr_d);

    return 0;


}
