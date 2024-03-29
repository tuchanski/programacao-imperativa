#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    /* Escreva um programa que imprima os endereços de memória dos valores
    máximo e mínimo para variáveis dos seguintes tipos:
    1. int
    2. short
    3. long
    4. float
    5. double
    6. long double */

    int max_int = INT_MAX;
    int min_int = INT_MIN;
    short max_short = SHRT_MAX;
    short min_short = SHRT_MIN;
    long max_long = LONG_MAX;
    long min_long = LONG_MIN;
    float max_float = FLT_MAX;
    float min_float = FLT_MIN;
    double max_double = DBL_MAX;
    double min_double = DBL_MIN;
    long double max_long_double = LDBL_MAX;
    long double min_long_double = LDBL_MIN;

    printf("- Enderecos de memoria dos valores maximo e minimo e seus respectivos valores:\n");

    printf("Inteiro (int):\n");
    printf("Endereco maximo: %p\n", &max_int);
    printf("Valor maximo: %d\n", max_int);
    printf("Endereco minimo: %p\n", &min_int);
    printf("Valor minimo: %d\n", min_int);
    printf("\n");

    printf("Short (short):\n");
    printf("Endereco maximo: %p\n", &max_short);
    printf("Valor maximo: %d\n", max_short);
    printf("Endereco minimo: %p\n", &min_short);
    printf("Valor minimo: %d\n", min_short);
    printf("\n");

    printf("Long (long):\n");
    printf("Endereco maximo: %p\n", &max_long);
    printf("Valor maximo: %ld\n", max_long);
    printf("Endereco minimo: %p\n", &min_long);
    printf("Valor minimo: %ld\n", min_long);
    printf("\n");

    printf("Ponto flutuante (float):\n");
    printf("Endereco maximo: %p\n", &max_float);
    printf("Valor maximo: %f\n", max_float);
    printf("Endereco minimo: %p\n", &min_float);
    printf("Valor minimo: %f\n", min_float);
    printf("\n");

    printf("Ponto flutuante duplo (double):\n");
    printf("Endereco maximo: %p\n", &max_double);
    printf("Valor maximo: %lf\n", max_double);
    printf("Endereco minimo: %p\n", &min_double);
    printf("Valor minimo: %lf\n", min_double);
    printf("\n");

    printf("Ponto flutuante longo duplo (long double):\n");
    printf("Endereco maximo: %p\n", &max_long_double);
    printf("Valor maximo: %Lf\n", max_long_double);
    printf("Endereco minimo: %p\n", &min_long_double);
    printf("Valor minimo: %Lf\n", min_long_double);

    return 0;
}
