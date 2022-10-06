/*
 *  Objectif : Consonne ou voyelle
 *  Auteur : V. Dalet
 *  Date   : 06 10 2022
 * */


#include <stdio.h>
#include <stdlib.h>

void VorC(char letter){
    if (letter >= 65 && letter <= 91){ // majuscule en minuscule
        letter += 32;
    }
    switch(letter) {
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
            printf("Consonne");
            break;
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Voyelle");
    }
}


int main() {
    /*Initialization*/
    char letter;
    /*Input*/
    printf("taper une lettre");
    scanf("%c",&letter);
    /*Function*/
    VorC(letter);
    return EXIT_SUCCESS;
}

