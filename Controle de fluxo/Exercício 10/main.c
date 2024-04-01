#include <stdio.h>
#include <math.h>

int main()
{
    /* 10 - Escreva um programa em C para calcular o fatorial de um número N fornecido
    pelo usuário. Use a estrutura for para gerar a sequência de termos. 
    3! = 3 x 2 x 1 = 6*/

    int n;
    int fatorial = 1;
    printf("- Entre um valor inteiro para calcular a fatorial: ");
    scanf("%d", &n);

    for (int i = n; i > 1; i = i - 1){
        fatorial = fatorial * i;
        // fatorial = 5 * 1 -> 4 * 1 -> 3 * 1 -> 2 * 1 -> 1 * 1 = 120
    }
    printf("Resultado: %d", fatorial);

    return 0;
}
