#include <stdio.h>

int main()
{

    /*
    TDE1 - Escreva um programa em C que calcule e retorne o n-ésimo termo da Sequência de Fibonacci, sendo n
    um valor inteiro fornecido pelo usuário via teclado. Embora a  definicao matemática seja recursiva, deve
    ser implementada uma versão iterativa da função, isto é, com uso de comando de repetição.
    */

    int n_termos;
    printf("- Insira a quantidade de termos da sequencia de Fibonacci a serem exibidos: ");
    scanf("%d", &n_termos);

    int sequencia[n_termos];
    int soma = 0;

    int primeiro_termo =  0;
    int segundo_termo = 1;

    sequencia[0] = primeiro_termo;
    sequencia[1] = segundo_termo;

    printf("- ");
    for (int termo = 2; termo < n_termos; termo++){
        sequencia[termo] = primeiro_termo + segundo_termo;
        soma = primeiro_termo + segundo_termo;
        primeiro_termo = segundo_termo;
        segundo_termo = soma;
    }

    for (int i = 0; i < n_termos; i++){
        printf("%d ", sequencia[i]);
    }
    return 0;
}
