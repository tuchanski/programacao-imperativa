#include <stdio.h>
#include <math.h>

int main()
{
    /* 9 - Sendo H = 1 + 1/2 + 1/3 + ¼ + ... 1/N, elaborar um programa. em C para
    gerar o número H. O valor de N deverá ser fornecido pelo usuário. Use a estrutura for
    para somar a sequência de termos.
    */

    int n;
    float soma = 0.0;

    printf("- Entre um valor para a soma de N termos: ");
    scanf("%d", &n);

    for (int denominador = 1; denominador <= n; denominador++){
        soma += (1.0 / denominador);
        printf("%.2f\n", soma);
    }


    return 0;
}
