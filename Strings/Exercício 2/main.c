#include <stdio.h>
#include <string.h>

#define SIZE 100

int main(int argc, char const *argv[])
{
    /*8.2 Elabore um programa em C que leia duas cadeias de caracteres (A e B) e imprima
    uma nova cadeia (C) com os elementos presentes tanto em A quanto em B.*/

    char palavra [SIZE];
    char palavra_secundaria [SIZE];
    int index = 0;

    printf("\n- Entre uma string: ");
    scanf("%s", palavra);
    printf("\n- Entre uma string: ");
    scanf("%s", palavra_secundaria);

    printf("\nStrings digitadas: %s e %s", palavra, palavra_secundaria);

    // Nova cadeia C com elementos presentes tanto em A quanto em B
    char elementos_comuns [SIZE];

    for (int i = 0; i < strlen(palavra); i++){
        for (int j = 0; j < strlen(palavra_secundaria); j++){
            if(palavra[i] == palavra_secundaria[j]){
                int duplicado = 0;
                for (int k = 0; k < index; k++){
                    if(elementos_comuns[k] == palavra[i]){
                        duplicado += 1;
                        break;
                    }
                }
                if (!duplicado){
                    elementos_comuns[index++] = palavra[i];
                }
            }
        }
    }

    elementos_comuns[index] = '\0';
    printf("\nElementos comuns: %s", elementos_comuns);

    return 0;
}
