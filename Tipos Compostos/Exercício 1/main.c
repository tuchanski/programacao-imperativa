#include <stdio.h>
#include <string.h>

/*Defina uma estrutura para representar os dados de uma
pessoa com os seguintes campos:
- nome: um vetor de char
- ano de nascimento: um valor inteiro
- altura (em centímetros): um valor real
Crie um vetor para armazenar os registros de quatro pessoas
e preencha esse vetor a partir de dados fornecidos pelo
usuário via teclado. Imprima o vetor para validar o programa.*/

#define VECT_SIZE 4

typedef
    struct
    {
        char nome[60];
        int ano_nasc;
        float altura;
    }
    Pessoa;

int main(int argc, char const *argv[])
{

    Pessoa registros [VECT_SIZE];

    for (int i = 0; i < VECT_SIZE; i++){

        Pessoa p;

        printf("\n[%d] - Digite um nome: ", i + 1);
        scanf("%s", p.nome);
        printf("\n[%d] - Digite o ano de nascimento: ", i + 1);
        scanf("%d", &p.ano_nasc);
        printf("\n[%d] - Digite a altura em cm: ", i + 1);
        scanf("%f", &p.altura);

        registros[i] = p;
    }

    // Imprimindo vetor
    printf("\nPessoas no registro: ");
    for (int j = 0; j < VECT_SIZE; j++){
        printf("\nPessoa: %s | %d | %.2fcm\n", registros[j].nome, registros[j].ano_nasc, registros[j].altura);
    }

    return 0;
}
