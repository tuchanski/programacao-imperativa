#include <stdio.h>
#include <math.h>

int main()
{
    /* Escreva um programa em C que calcule a média e o desvio padrão das notas de
    uma turma de, no máximo, 50 estudantes. Para cada estudante, há uma nota entre 0 e
    10, com apenas uma casa decimal.
    */

    // Definindo a quantidade de alunos
    int quantidade_alunos;
    printf("- Entre a quantidade de alunos da turma (max 50): ");
    scanf("%d", &quantidade_alunos);
    
    while (quantidade_alunos > 50){
        printf("- Valor invalido. Tente novamente: ");
        scanf("%d", &quantidade_alunos);
    }

    // Criando um vetor que armazene as notas
    float notas_turma[quantidade_alunos];

    for (int i = 0; i < quantidade_alunos; i++){
        float nota;
        printf("- Entre a nota [%d]: ", i + 1);
        scanf("%f", &nota);
        while (nota > 10 || nota < 0){
            printf("- Nota invalida. Entre a nota [%d]: ", i + 1);
            scanf("%f", &nota);
        }
        notas_turma[i] = nota;
    }

    printf("\n- Notas: ");
    for (int i = 0; i < quantidade_alunos; i++){
        printf("%.2f ", notas_turma[i]);
    }

     // Calculando a  media
    float soma = 0;
    for (int i = 0; i < quantidade_alunos; i++){
        soma += notas_turma[i];
    }
    float media = 0;
    media = soma / quantidade_alunos;

    printf("\n- Media: ");
    printf("%.2f", media);

    // Calculando o desvio padrao
    // 1 - Calcular desvio
    float desvio[quantidade_alunos];
    for (int i = 0; i < quantidade_alunos; i++){
        if (notas_turma[i] > media){
            desvio[i] =  notas_turma[i] - media;
        }
        else{
            desvio[i] =  media - notas_turma[i];
        }
    }

    // 2 - Calcular variancia (media dos quadrados de cada desvio)
    float soma_variancia =  0;
    for (int i = 0; i < quantidade_alunos; i++){
        soma_variancia = soma_variancia + (pow(desvio[i], 2));
    }
    float variancia = soma_variancia / quantidade_alunos;
    
    // 3 - Calcular desvio  padrao (raiz quadrada da variancia)
    float desvio_padrao = sqrt(variancia);

    printf("\n- Desvio padrao: ");
    printf("%.2f", desvio_padrao);

    return 0;
}
