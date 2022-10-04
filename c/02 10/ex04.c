/*
 * Programme 4  EX chapitre 1
 * Traitement lettre
 *
 *  Auteur : V. Dalet
 *  Date   : 02 10 2022
 * */


#include <stdio.h>
#include <stdlib.h>

int numberLetter(int letter) {
    return letter - 96;
}

char conversion(char letter) {
    return letter - 32;
}

char next(char letter){
    return (letter - 32 ) + 1;
}

int main() {
    /*Initialization*/
    char letter;
    /*Input*/
    printf("Taper une lettre en minuscule");
    scanf("%c",&letter);
    /*Function*/
    printf("Il s'agit de la lettre numero %d\n", numberLetter(letter));
    printf("Majuscule : %c\n", conversion(letter));
    printf("Lettre suivante : %c\n", next(letter));



    return EXIT_SUCCESS;
}
