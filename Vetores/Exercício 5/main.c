#include <stdio.h>
#include <stdbool.h>

int main()
{
    /*5 - Escreva um programa em C que leia do teclado uma sequência de caráteres de
    qualquer tamanho e identifique se é ou não um palíndromo. Antes de fornecer a
    sequência de caráteres, o usuário deve informar o tamanho da sequência.
    */
    printf("Digite o comprimento da string: ");
    int comprimento;
    scanf("%d", &comprimento);

    char cadeia[comprimento];
    printf("Digite a string: ");
    setbuf(stdin, NULL); // Limpa o buffer do teclado

    for (int i = 0; i < comprimento; i++) {
        cadeia[i] = getchar();
        putchar(cadeia[i]);
    }

    // Verificando se é um palíndromo
    bool palindromo = true;
    for (int i = 0; i < comprimento / 2; i++) {
        if (cadeia[i] != cadeia[comprimento - i - 1]) {
            palindromo = false;
            break;
        }
    }

    if (palindromo == true) {
        printf("\nA string é um palíndromo.\n");
    } else {
        printf("\nA string não é um palíndromo.\n");
    }

    return 0;
}
