#include <stdio.h>

int main()
{
    /* Escreva um programa em C que leia do teclado uma sequência qualquer de valores
    inteiros distintos entre si e armazene-a em um vetor. Para cada valor da sequência
    fornecido pelo usuário, o programa deve verificar se, de fato, é um valor inédito antes
    de inseri-lo no vetor. Caso não seja, o programa deve rejeitar o valor fornecido. */

    int n;
    printf("- Escolha o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++){
        printf("- Entre um valor: ");
        int aux;
        scanf("%d", &aux);
        for (int j = 0; j < i; j++){
            while(vetor[j] == aux){
                printf("- Valor invalido. Entre um valor: ");
                scanf("%d", &aux);
                j = -1; // Reinicializa a verificação
            }
        }
        vetor[i] = aux;
    }
    for (int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}
