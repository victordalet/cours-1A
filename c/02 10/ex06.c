/*
 * Programme 7 EX chapitre 1
 * giga seconde
 *
 *  Auteur : V. Dalet
 *  Date   : 02 10 2022
 * */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {
    long gigaSec = pow(10,9);
    double day = gigaSec/60/60/24;
    printf("%lf",day);
    return EXIT_SUCCESS;
}
