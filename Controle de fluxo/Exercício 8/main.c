#include <stdio.h>
#include <math.h>

int main()
{
    /*8 - Converta o programa
    em Python ao lado para
    um programa em C,
    usando
    while e
    break.
    # Python
    i=10
    while i > 0 :
    i = i – 0.25
    print (i)
    if (i**2) + 1 ≥ 1.45 :
    i = i + 0,20;
    else
    break*/

    double i = 10.0;
    while (i > 0){
        i -= 0.25;
        printf("%f\n", i);
        if ((pow(i, 2)) + 1 >= 1.45){
            i += 0.20;
        }
        else{
            break;
        }
    }

    return 0;
}
