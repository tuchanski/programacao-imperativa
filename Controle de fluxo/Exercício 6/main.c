#include <stdio.h>
#include <math.h>

int main()
{
    /*6 - Converta o programa
    em Python ao lado
    para um programa em
    C, usando o comandofor
    # Python
    PI = 3.1416
    R = 0
    while R <= 6:
    VOLUME = 4/3 * PI * (R**3)
    print(R, VOLUME)
    R = R + 2 */

    float pi = 3.1416;
    for (int r = 0; r <= 6; r += 2){
        float volume = (4.0/3) * pi * (pow(r, 3));
        printf("%d %f\n", r, volume);
    }
    return 0;
    
}
