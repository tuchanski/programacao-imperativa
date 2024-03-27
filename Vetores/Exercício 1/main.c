#include <stdio.h>

int main()
{
    /*
    Considere uma empresa comercial que vende os seus produtos de segunda-feira a sábado. Para cada dia
    da semana, a empresa arrecada um valor (em reais) com as vendas, denominado de faturamento.
    Escreva um programa que registre o faturamento de cada dia de uma semana e, então, determine o
    seguinte:
    1. O faturamento total da semana
    2. O faturamento diário médio
    3. O dia da semana com o menor faturamento
    4. O dia da semana com o maior faturamento
    O programa deve utilizar um vetor para armazenar o faturamento da semana: cada elemento do vetor
    corresponde ao faturamento de um dia.
    */

    float faturamento_dia_semana[6];

    float faturamento_semanal = 0;
    float menor_faturamento;
    float maior_faturamento;

    int menor_indice = 0; 
    int maior_indice = 0; 

    // Povoar array com os valores referentes a cada dia da semana.
    for (int i = 0; i < 6; i++){
        printf("- Insira o valor faturado no dia %d da semana: ", i);
        scanf("%f", &faturamento_dia_semana[i]);
    }

    // Inicialize menor_faturamento e maior_faturamento com o primeiro valor do array
    menor_faturamento = faturamento_dia_semana[0];
    maior_faturamento = faturamento_dia_semana[0];

    // Faturamento total da semana
    for (int i = 0; i < 6; i++){
        faturamento_semanal += faturamento_dia_semana[i];
    }
    printf("\n- Faturamento total da semana: %.2f", faturamento_semanal);

    // Dia da semana com menor faturamento
    for (int i = 0; i < 6; i++){
        if (menor_faturamento > faturamento_dia_semana[i]){
            menor_faturamento = faturamento_dia_semana[i];
            menor_indice = i;
        }
    }
    printf("\n- Indice do dia da semana com menor faturamento: %d", menor_indice);

    // Dia da semana com maior faturamento
    for (int i = 0; i < 6; i++){
        if (maior_faturamento < faturamento_dia_semana[i]){
            maior_faturamento = faturamento_dia_semana[i];
            maior_indice = i;
        }
    }
    printf("\n- Indice do dia da semana com maior faturamento: %d", maior_indice);
    return 0;
}