/*
 *  Objectif : Calcule de mention de bac
 *  Auteur : V. Dalet
 *  Date   : 06 10 2022
 * */


#include <stdio.h>
#include <stdlib.h>

void mention (double  average);


int main() {
    /*Initialization*/
    double average;
    /*Input*/
    printf("Taper la moyenne : ");
    scanf("%lf",&average);
    /*Function*/
    mention(average);
    return EXIT_SUCCESS;
}

void mention(double average){
    // attribut une mention selon la moyenne
    if (average >= 0 && average <= 20) {
        if (average < 10)
            printf("Vous n'avez pas le bac");
        else if (average < 12)
            printf("Pas de mention");
        else if (average < 14)
            printf("AB");
        else if (average < 16)
            printf("B");
        else if (average < 16)
            printf("TB");
        else
            printf("FDJ");
    }
    else { // si la note n'est pas possible redemande les valeurs
        printf("Erreur de saisie \n");
        main();
    }
}
