#include <stdio.h>

int main()
{
    /*Escreva um programa em C que leia do teclado dois vetores (A e B) com cinco
    elementos inteiros cada um, gere um terceiro vetor (S) com a soma dos
    correspondentes elementos dos dois primeiros ( S[i] = A[i] + B[i] ) e
    imprima os três vetores.*/

    int vetorA[5];
    int vetorB[5];
    int vetorAB[5];

    // Povoando vetor A
    for(int i = 0; i < 5; i++){
        printf("[A] - Entre um valor p/ indice %d: ", i);
        scanf("%d", &vetorA[i]);
    }
    // Povoando vetor B
    for(int i = 0; i < 5; i++){
        printf("[B] - Entre um valor p/ indice %d: ", i);
        scanf("%d", &vetorB[i]);
    }

    // Povoando vetor AB com soma de A[I] + B[I]
    for (int i =  0; i < 5; i++){
        vetorAB[i] = vetorA[i] + vetorB[i];
    }

    // Imprimindo Vetores A, B e AB
    for (int i = 0; i < 5; i++){
        printf("%d ", vetorA[i]);
    }
    for (int i = 0; i < 5; i++){
        printf("%d ", vetorB[i]);
    }
    for (int i = 0; i < 5; i++){
        printf("%d ", vetorAB[i]);
    }

    return 0;
}
