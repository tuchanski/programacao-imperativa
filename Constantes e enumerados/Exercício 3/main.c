#include <stdio.h>
#include<stdbool.h>

enum Elevador {OCIOSO, ESTACIONADO, SUBINDO, DESCENDO};
typedef enum Elevador Elevador;

int main()
{
    /* Escreva um código que defina um tipo enumerado
    para representar os estados de um elevador com
    respeito ao seu movimento: ocioso (aguardando uma
    chamada), estacionado (parado em certo andar para
    alguém entrar ou sair), subindo ou descendo. E,
    ainda, defina uma variável desse novo tipo.
    */

    bool loop = true;
    while (loop) {
    Elevador elevador;
    printf("\n[0] - Ocioso\n[1] - Estacionado\n[2] -  Subindo\n[3] - Descendo\n- Escolha a  acao do elevador: ");
    scanf("%d", &elevador);

    switch(elevador){
            case OCIOSO:
                puts("\n- Aguardando uma chamada...");
                break;
            case ESTACIONADO:
                puts("\n- Parado em certo andar...");
                break;
            case SUBINDO:
                puts("\n- Subindo...");
                break;
            case DESCENDO:
                puts("\n- Descendo...");
                break;
            default:
                puts("\n- Erro. Programa encerrado.");
                loop = false;
                break;
    }
    }
    return 0;
}
