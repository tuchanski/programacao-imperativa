#include <stdio.h>
#include <math.h>

int main()
{
    /* Converta o programa
    em Python ao lado
    para um programa em
    C, usando
    do-while.
    # Python
    PI = 3.1416
    R = 0
    while R <= 6:
    VOLUME = 4/3 * PI * (R**3)
    print(R, VOLUME)
    R = R + 2 */

    const float pi = 3.1416;
    int r = 0;

    do {
        float volume = (4.0/3) * pi * (pow(r, 3));
        printf("%d %f\n", r, volume);
        r += 2;
    }
    while (r <= 6);

    return 0;
}
