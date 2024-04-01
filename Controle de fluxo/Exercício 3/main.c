#include <stdio.h>

int main()
{
    /*3 - Elabore um programa em C para simular uma calculadora com as quatro operações
    básicas (adição, subtração, multiplicação e divisão), usando a estrutura switch. O programa
    deve receber, como entrada, dois operandos (double) e um operador (char). Como saída, o
    programa deve exibir o resultado da aplicação do operador sobre os dois operandos.. */

    char operacao;
    double valor_1, valor_2, resultado;

    do{
        printf("\n- Calculadora -\n");
        printf("[1] - Soma\n[2] - Subtracao\n[3] - Produto\n[4] - Divisao\n[5] - Encerrar");
        printf("\n- Entre aqui: ");
        scanf(" %c", &operacao);
        switch(operacao){
            case '1':
                printf("\n- Entre um valor: ");
                scanf("%lf", &valor_1);
                printf("\n- Entre outro valor: ");
                scanf("%lf", &valor_2);
                resultado = valor_1 + valor_2;
                printf("\n- (%.2f + %.2f = %.2f)\n", valor_1, valor_2, resultado);
                break;
            case '2':
                printf("\n- Entre um valor: ");
                scanf("%lf", &valor_1);
                printf("\n- Entre outro valor: ");
                scanf("%lf", &valor_2);
                resultado = valor_1 - valor_2;
                printf("\n- (%.2f - %.2f = %.2f)\n", valor_1, valor_2, resultado);
                break;
            case '3':
                printf("\n- Entre um valor: ");
                scanf("%lf", &valor_1);
                printf("\n- Entre outro valor: ");
                scanf("%lf", &valor_2);
                resultado = valor_1 * valor_2;
                printf("\n- (%.2f x %.2f = %.2f)\n", valor_1, valor_2, resultado);
                break;
            case  '4':
                printf("\n- Entre um valor: ");
                scanf("%lf", &valor_1);
                printf("\n- Entre outro valor: ");
                scanf("%lf", &valor_2);
                while (valor_2 == 0){
                    printf("\n- Impossivel realizar divisao com 0. Tente novamente: ");
                    scanf("%lf", &valor_2);
                }
                resultado = valor_1 / valor_2;
                printf("\n- (%.2f / %.2f = %.2f)\n", valor_1, valor_2, resultado);
                break;
            case '5':
                printf("\n- Programa encerrado.");
                break;
            default:
                printf("\n- Operacao invalida.\n");
        }
    }while (operacao != '5');
    
    return 0;
}
