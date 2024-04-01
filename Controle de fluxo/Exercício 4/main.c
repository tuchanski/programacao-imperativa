#include <stdio.h>

int main()
{
    /*4 - Elabore um programa em C que leia dois valores inteiros: o primeiro define
    o limite inferior de um intervalo, enquanto o segundo o limite superior. Imprima
    todos os múltiplos de 3 no intervalo, incluindo os limites inferior e superior, se
    for o caso.
    Testar as seguintes condições:
    1) O limite inferior não pode ser maior que o limite superior
    2) O limite inferior não pode ser igual ao limite superior.
    O usuário deve ter até 3 chances para fornecer valores válidos para os limites
    inferior e superior. Se o usuário ultrapassar esse número de chances, o programa
    deve retornar o código 15 e encerrar.
    IMPORTANTE: Os programas não podem conter o comando break, nem o
    comando goto. Também, não podem conter um comando return dentro de um
    bloco de repetição. Além disso, não podem usar array. - */

    int limite_inferior, limite_superior, tentativa;
    tentativa = 0;

    printf("\n- Entre o valor do limite inferior do intervalo: ");
    scanf("%d", &limite_inferior);

    // Validando limite superior
    printf("\n- Entre o valor do limite superior do intervalo: ");
    scanf("%d", &limite_superior);

    while (limite_inferior >= limite_superior){
        printf("\n- O limite inferior não pode ser maior ou igual ao superior. Tente novamente: ");
        scanf("%d", &limite_inferior);
        tentativa += 1;
        if  (tentativa >= 3){
            printf("\n- Número máximo de tentativas ultrapassado.\nPrograma encerrado.");
            return 15;
        }
    }
    // Printando múltiplos de 3 no intervalo
    printf("\n- Múltiplos de 3 no intervalo: ");
    for(int i = limite_inferior; i <= limite_superior; i++){
        if (i % 3 == 0){
            printf("[%d] ", i);
        }
    }
    return 0;
}
