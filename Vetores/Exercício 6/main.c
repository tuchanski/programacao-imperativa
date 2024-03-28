#include <stdio.h>
#include<stdbool.h>

int main()
{
    /*Escreva um programa em C que leia do teclado uma sequência qualquer de valores
    inteiros e armazene-a em um vetor v. Em seguida, leia do teclado um valor inteiro x e
    procure esse valor no vetor v. O programa deve informar se x foi ou não encontrado em
    v. Se encontrado, deve informar o índice do vetor onde x se encontra.*/

    printf("- Insira a quantidade de termos a serem lidos: ");
    int n_termos;
    scanf("%d", &n_termos);

    // Criando e povoando vetor

    printf("\n");
    int vetor_v[n_termos];
    for (int i = 0; i < n_termos;  i++){
        printf("%d - Insira um valor: ", i);
        scanf("%d", &vetor_v[i]);
    }

    // Recebendo numero a ser procurado e procurando-o no vetor

    bool indice_encontrado = false;
    printf("\n- Insira  um valor para  ser procurado no vetor v: ");
    int numero_procurado;
    scanf("%d", &numero_procurado);

    for (int i = 0; i < n_termos; i++){
        if (vetor_v[i] == numero_procurado){
            printf("\n- Valor encontrado. Indice: %d", i);
            indice_encontrado = true;
        }
        }
    
    if (indice_encontrado == false){
        printf("\n- Valor nao encontrado.");
    }

    return 0;
}
