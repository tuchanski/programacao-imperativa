#include <stdio.h>

int main() {
    /* 11 - Fazer um programa em C para calcular o valor da série S abaixo.
    O valor de N deve ser fornecido pelo usuário.
    Use a estrutura do-while para somar a sequência de termos.
    S = 1/N + 2/N-1 + 3/N-2 + ...+ N-1/2 + N/1 */

    int numero_termos = 0;
    float somatoria = 0.0;
    int numerador = 1;
    int contador = 1; // Inicializar o contador como 1

    printf("Entre um valor para N termos da expressao: ");
    scanf("%d", &numero_termos);

    do {
        somatoria += (float)numerador / contador; // Convertendo numerador para float
        numerador += 1;
        contador += 1;
    } while (contador <= numero_termos);

    printf("Somatoria de %d termos: %.2f", numero_termos, somatoria);

    return 0;
}
