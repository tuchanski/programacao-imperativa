#include <stdio.h>

int main()
{
    /*4 - Escreva um programa em C que leia do teclado um vetor de caráteres, gere um
    novo vetor de caráteres na ordem inversa do primeiro e imprima os dois vetores. A
    quantidade de caráteres (isto é, a capacidade do vetor) deve ser determinada pelo
    usuário (valor fornecido via teclado).*/

    printf("- Digite o comprimento da string: ");

    int comprimento_string;
    scanf("%d", &comprimento_string);

    char cadeia[comprimento_string];
    printf("Digite a string: ");
    setbuf(stdin, NULL); // Limpa o buffer do teclado

    for (int i = 0; i < comprimento_string; i++) {
        cadeia[i] = getchar();
        putchar(cadeia[i]);
    }

    // Criando array de ordem inversa
    char cadeia_inversa[comprimento_string];
    for (int i = 0; i < comprimento_string; i++) {
        cadeia_inversa[comprimento_string - 1 - i] = cadeia[i];
    }

    // Printando arrays
    printf("\nCadeia original: ");
    for (int i = 0; i < comprimento_string; i++) {
        printf("%c", cadeia[i]);
    }

    printf("\nCadeia inversa: ");
    for (int i = 0; i < comprimento_string; i++) {
        printf("%c", cadeia_inversa[i]);
    }

    return 0;
    
}
