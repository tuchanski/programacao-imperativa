#include <stdio.h>
#include <math.h>

int main()
{
    /*5 - Escreva um programa
    em C que seja
    equivalente ao
    programa em Python
    ao lado.
    # Python
    # Cálculo do volume de uma esfera de raio R
    PI = 3.1416
    R = 0
    while R <= 6:
    VOLUME = 4/3 * PI * (R**3)
    print(R, VOLUME)
    R = R + 2 */

    double pi = 3.1416;
    int r = 0;

    while (r <= 6){
        double volume = (4.0/3) * pi * (pow(r, 3));
        printf("%d %f\n", r, volume);
        r += 2;
    }

    return 0;
}
