#include <stdio.h>

int main()
{
    /*1 - Escreva um programa na linguagem C que, dados dois números inteiros distintos
    fornecidos pelo usuário (via teclado), imprima-os em ordem crescente. 
    Obs: o programa deve certificar-se de que os dois números sejam distintos */

    int valor_a, valor_b;
    
    printf("- Digite um valor inteiro: ");
    scanf("%d", &valor_a);

    printf("- Digite outro valor inteiro: ");
    scanf("%d", &valor_b);

    while (valor_a == valor_b) {
        printf("- Valor ja inserido. Tente novamente: ");
        scanf("%d", &valor_b);
    }

    if (valor_a > valor_b) {
        printf("- Ordem crescente: %d, %d\n", valor_b, valor_a);
    }
    else {
        printf("- Ordem crescente: %d, %d\n", valor_a, valor_b);
    }

    return 0;
}
