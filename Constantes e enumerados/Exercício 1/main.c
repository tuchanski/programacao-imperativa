#include <stdio.h>

#define SEGUNDA 1
#define TERCA 2
#define  QUARTA 3
#define QUINTA 4
#define SEXTA 5
#define SABADO 6
#define DOMINGO 7

int main()
{
    /*Escreva um código que defina um conjunto de
    constantes para representar os sete dias da
    semana:
    a) Usando const
    b) Usando #define */

    // a)
    const int SEGUNDA_ = 1;
    const int TERCA_ = 2;
    const int QUARTA_ = 3;
    const int QUINTA_ = 4;
    const int SEXTA_ = 5;
    const int SABADO_ = 6;
    const int DOMINGO_ = 7;

    printf("- Dias da semana usando const:\n");
    printf("Segunda: %d\n", SEGUNDA_);
    printf("Terca: %d\n", TERCA_);
    printf("Quarta: %d\n", QUARTA_);
    printf("Quinta: %d\n", QUINTA_);
    printf("Sexta: %d\n", SEXTA_);
    printf("Sabado: %d\n", SABADO_);
    printf("Domingo: %d\n", DOMINGO_);
    printf("***************\n");
    printf("- Dias da semana usando #define:\n");
    printf("Segunda: %d\n", SEGUNDA);
    printf("Terca: %d\n", TERCA);
    printf("Quarta: %d\n", QUARTA);
    printf("Quinta: %d\n", QUINTA);
    printf("Sexta: %d\n", SEXTA);
    printf("Sabado: %d\n", SABADO);
    printf("Domingo: %d\n", DOMINGO);

    return 0;
}
