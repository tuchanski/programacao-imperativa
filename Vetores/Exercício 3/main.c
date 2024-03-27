#include <stdio.h>

int main()
{
    /* Escreva um programa em C que leia do teclado um vetor de oito elementos reais,
    imprima esse vetor e, depois, imprima a soma dos elementos equidistantes, isto é,
    imprime a soma do primeiro com último, depois a soma do segundo com o penúltimo,
    e assim por diante. */

    float vetor[8];

    // Povoando vetor de números reais
    for (int i = 0; i < 8; i++){
        printf("[Vetor] - Entre um valor para o indice %d: ", i);
        scanf("%f", &vetor[i]);
    }
    printf("\n");
    
    // Imprimindo vetor
    for (int i = 0; i < 8; i++){
        printf("%.2f  ", vetor[i]);
    }
    printf("\n");

    // Imprimindo a soma dos elementos equidistantes
    for (int i = 0; i < 4; i++){
        printf("%.2f ", (vetor[i] + vetor[7 - i]));
    }

    return 0;
}
