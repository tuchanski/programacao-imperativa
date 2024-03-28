#include <stdio.h>

int main()
{
    /* 7 - Escreva um programa em C que leia do teclado uma sequência qualquer de valores
    inteiros e armazene-a em um vetor v. Em seguida, gere um novo vetor de inteiros com
    a mesma capacidade e os mesmos elementos de v, porém em ordem crescente. */

    printf("- Insira a quantidade de elementos do vetor: ");
    int n_elementos;
    scanf("%d", &n_elementos);

    int vetor[n_elementos];
    for (int i = 0; i < n_elementos; i++){
        printf("[%d] - Insira um elemento: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\n- ");
    for (int  i = 0; i <  n_elementos; i++){
        printf("%d ", vetor[i]);
    }

    // Novo vetor em ordem crescente

    printf("\n- ");
    int vetor_crescente[n_elementos];
    for (int i = 0; i < n_elementos; i++){
        vetor_crescente[i] = vetor[i];
    }

    for (int i = 0; i < n_elementos; i++){
        for(int j = i + 1; j < n_elementos; j++){
            if(vetor_crescente[i] > vetor_crescente[j]){
                int aux = vetor_crescente[i];
                vetor_crescente[i] = vetor_crescente[j];
                vetor_crescente[j] = aux;
            }
        }
    }

    for (int i = 0; i < n_elementos; i++){
        printf("%d ", vetor_crescente[i]);
    }

    return 0;
}
