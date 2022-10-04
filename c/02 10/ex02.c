/*
 * Programme 3 EX chapitre 1
 * 
 *  Objectif : Calcule note hackaton
 *  Auteur : V. Dalet
 *  Date   : 02 10 2022
 * */


#include <stdio.h>
#include <stdlib.h>

double calculatesScore(double val1, double val2, double val3){
    // calcule la note final
    return ((val1+(val2*2)+(val3*3))/6)+1;
}

int profit(double note) {
    // calcule le nb d'argent gangé
    int value = 0; // nb d'argent gangé
    for (int i = 10 ; i < note ; i++) {
        value += 100;
    }
    return value;
}

int main() {
    /*Initialization*/
    double noteDesigner; //coefficient 1
    double noteTeacher; //coefficient 2
    double noteJournalist; //coefficient 3
    /*Input*/
    printf("Note de l'infographiste : ");
    scanf("%lf" , &noteDesigner);
    printf("Note de l'enseignant : ");
    scanf("%lf",&noteTeacher);
    printf("Note du journaliste : ");
    scanf("%lf",&noteJournalist);
    /*Function*/
    printf("Note final : %.2lf \n", calculatesScore(noteDesigner,noteTeacher,noteJournalist));
    printf("Vous avez gagnez %d euro", profit(calculatesScore(noteDesigner,noteTeacher,noteJournalist)));

    return EXIT_SUCCESS;
}
