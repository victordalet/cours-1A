/*
 * Programme 7 EX chapitre 1
 * 
 *  Objectif : giga seconde
 *  Auteur : V. Dalet
 *  Date   : 02 10 2022
 * */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {
    /*Initialization*/
    char age;
    /*Input*/
    printf("Quelle est votre age?");
    scanf("%c",&age);
    /*Result*/
    long gigaSec = pow(10,9);
    double years = gigaSec/60/60/24/365;
    printf("Vous aurez %lf ans apres une vie d'une giga seconde",years+age);
    return EXIT_SUCCESS;
}
